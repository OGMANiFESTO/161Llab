`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

`define WORD_SIZE 32

module cs161_datapath(
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
    reg_write ,    
	 
    // Debug Signals
    prog_count ,  
    instr_opcode ,  
    reg1_addr   ,  
    reg1_data  ,   
    reg2_addr  ,   
    reg2_data  ,   
    write_reg_addr ,
    write_reg_data
    );

 input wire  clk ; 
 input wire  rst ;
 
 output reg[5:0] instr_op ;
 output reg[5:0] funct  ;  
 
 input wire   reg_dst  ;
 input wire   branch   ;
 input wire   mem_read ;
 input wire   mem_to_reg ;
 input wire[3:0] alu_op  ;  
 input wire   mem_write ;
 input wire   alu_src   ; 
 input wire   reg_write  ;
 
// ----------------------------------------------
// Debug Signals
// ----------------------------------------------
  
 output wire[`WORD_SIZE-1:0]  prog_count ;
 output wire[5:0] instr_opcode   ;  
 output wire[4:0] reg1_addr     ;   
 output wire[`WORD_SIZE-1:0] reg1_data ;
 output wire[4:0] reg2_addr   ;   
 output wire[`WORD_SIZE-1:0] reg2_data ;
 output wire[4:0] write_reg_addr  ;
 output wire[`WORD_SIZE-1:0] write_reg_data ; 

// Insert your solution below here.
 always @(*) begin
	if((reg_dst == 1'b1)&&(alu_src == 1'b0)&&(mem_to_reg == 1'b0)&&(reg_write == 1'b1)&&(mem_read == 1'b0)&&(branch == 1'b0))
		instr_op = 6'b000000;
	
	else if((reg_dst == 1'b0)&&(alu_src == 1'b1)&&(mem_to_reg == 1'b1)&&(reg_write == 1'b1)&&(mem_read == 1'b1)&&(branch == 1'b0))
		instr_op = 6'b100011;
	
	else if((reg_dst == 1'bx)&&(alu_src == 1'b1)&&(mem_to_reg == 1'bx)&&(reg_write == 1'b0)&&(mem_read == 1'b0)&&(branch == 1'b0))
		instr_op = 6'b101011;
	
	else if((reg_dst == 1'bx)&&(alu_src == 1'b0)&&(mem_to_reg == 1'bx)&&(reg_write == 1'b0)&&(mem_read == 1'b0)&&(branch == 1'b1))
		instr_op = 6'b000100;
	
	else if((reg_dst == 1'b0)&&(alu_src == 1'b1)&&(mem_to_reg == 1'b1)&&(reg_write == 1'b1)&&(mem_read == 1'b1)&&(branch == 1'b0))
		instr_op = 6'b001000;
	
	
	case(alu_op)
		4'b0010: begin
			if(instr_op == 6'b100000) 
				funct = 6'b100000;
			else
				funct = 6'bxxxxxx;
		end
		4'b0110: begin
			if(instr_op == 6'b100010)
				funct = 6'b100010;
			else
				funct = 6'bxxxxxx;
		end
		4'b0000: begin
			funct = 6'b100100;
		end
		4'b0001: begin
			funct = 6'b100101;
		end
		4'b1100: begin
			funct = 6'b100111;
		end
		4'b0111: begin
			funct = 6'b101010;
		end
	endcase
 
 end	
endmodule
