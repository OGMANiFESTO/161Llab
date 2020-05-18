
`timescale 1ns / 1ps

module cs161_processor(
    clk ,
    rst ,   
	 // Debug signals 
    prog_count     , 
    instr_opcode   ,
    reg1_addr      ,
    reg1_data      ,
    reg2_addr      ,
    reg2_data      ,
    write_reg_addr ,
    write_reg_data  
    );

input wire clk ;
input wire rst ;
    
// Debug Signals

input wire[31:0] prog_count     ; 
input wire[5:0]  instr_opcode   ;
input wire[4:0]  reg1_addr      ;
input wire[31:0] reg1_data      ;
input wire[4:0]  reg2_addr      ;
input wire[31:0] reg2_data      ;
input wire[4:0]  write_reg_addr ;
input wire[31:0] write_reg_data ;

// Insert your solution below here.
wire[31:0] pc2, signext, zext, reg1data, reg2data, regwritedata, instr, immed, pc4, alu_result, mem_data, read1;
wire[4:0] reg1addr, reg2addr, regwriteaddr;
wire reg_dst, mem_to_reg, mem_read, mem_write, alu_src, branch, zero, reg_write;
wire [1:0] alu_op; 
reg [5:0] instruction_5_0; 
 
wire [3:0] alu_out;

//instruc_op = in
assign pc2 = prog_count + 32'd4;
/*always @(*) begin
end*/
assign reg1addr = instr[25:21];
assign reg2addr = instr[20:16];

assign signext = {{16{instr[15]}}, instr[15:0]};
assign zext = {{16{1'b0}}, instr[15:0]};

cs161_datapath Dapath(
	clk ,     
    rst ,     
    instr_op ,
    funct   , 
    reg_dst , 
    branch  , 
    mem_read , 
    mem_to_reg ,
    alu_op    , 
    mem_write  ,
    alu_src  ,  
    reg_write  
);


gen_register gen(
	clk, 
	rst, 
	write_en,
	data_in, 
	data_out
);

cpu_registers Reg(
	 .clk(clk),	
    .rst (rst), 
    .reg_write (reg_write),
    .read_register_1 (reg1_addr),
    .read_register_2 (reg2_addr), 
    .write_register (write_reg_addr), 
    .write_data (write_reg_data),  
    .read_data_1 (reg1data),   
    .read_data_2 (reg2data) 
);

alu ALUM(
	.alu_control_in (alu_result), 
	.channel_a_in (reg1_data), 
	.channel_b_in (read1), 
	.zero_out (zero), 
	.alu_result_out (ALU_result) );

cpumemory CPUM(
	.clk (clk),
   .rst (rst) ,
   .instr_read_address (prog_count[8:1]),
   .instr_instruction (instr),
   .data_mem_write (mem_write),   
   .data_address (alu_result),    
   .data_write_data (reg2_data),    
   .data_read_data (mem_data) 
);

aluControlUnit ALUControl(
    .alu_op (alu_op), 
    .instruction_5_0 (instruction_5_0), 
    .alu_out (alu_out)	
);	

controlUnit ControlU(
    .instr_op (instr_opcode), 
    .reg_dst (reg_dst),   
    .branch (branch)  ,     
    .mem_read (mem_read),  
    .mem_to_reg (mem_to_reg),
    .alu_op (alu_op),        
    .mem_write (mem_write) , 
    .alu_src (alu_src),    
    .reg_write (reg_write)
);

mux_2_1 Amux(
	.select_in (mem_to_reg), 
	.datain1 (mem_data), 
	.datain2(alu_result), 
	.data_out(regwritedata) 
);

mux_2_1 Amux2(
	.select_in (alu_src), 
	.datain1 (signext), 
	.datain2(reg2_data), 
	.data_out(read1) 
);

/*always @(*) begin
	reg1_data = reg1data;
	reg2_data = reg2data;
	write_reg_data = regwritedata;
end*/
endmodule