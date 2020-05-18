`timescale 1ns / 1ps

module cs161_processor_testbench( );

  // Inputs
  reg [5:0] instr_op;
  reg[3:0] alu_out;
  reg [5:0] instruction_5_0;
  reg clk ;
  reg rst ;

  // Outputs
  
  wire [31:0] prog_count  ;
  wire [5:0] instr_opcode ;
  wire [4:0] reg1_addr    ;
  wire [31:0] reg1_data   ;
  wire [4:0] reg2_addr  ;
  wire [31:0] reg2_data ;
  wire [4:0] write_reg_addr ;
  wire [31:0] write_reg_data ;

  wire reg_dst;
	wire branch;
	wire mem_read;
	wire mem_to_reg;
	reg [1:0] alu_op;
	wire mem_write;
	wire alu_src;
	wire reg_write;
 cs161_processor uut (
    .clk                 ( clk ),
    .rst                 ( rst ),
    .prog_count          ( prog_count ),
    .instr_opcode        ( instr_opcode ),
    .reg1_addr           ( reg1_addr ),
    .reg1_data           ( reg1_data ),
    .reg2_addr           ( reg2_addr ),
    .reg2_data           ( reg2_data ) ,
    .write_reg_addr      ( write_reg_addr ),
    .write_reg_data      ( write_reg_data )
    );
  
  	initial begin 
	 
	 clk = 0 ; 
	 rst = 1 ; 
	 # 20 ; 
	 
	 clk = 1 ; 
	 rst = 1 ; 
	 # 20 ; 

	 clk = 0 ; 
	 rst = 0 ; 
	 # 20 ; 
		 
	 forever begin 
		#20 clk = ~clk;
	 end 
	 
	end 
	
	integer failedTests = 0;
	integer totalTests= 0;
	
	initial begin
		@(negedge rst);
		@(posedge clk);
		#10 ; // Wait 
		
		//lw
		//$display("Load Word Test");
      instr_op = 6'b100011;  
		alu_op = 2'b00;
		$write("Load word ");
		totalTests = totalTests + 1;
		#100;
		if (reg_dst != 1'b0 && alu_src != 1'b1 && mem_to_reg != 1'b1 && reg_write != 1'b1 && mem_read != 1'b1 && mem_write != 1'b0 && branch != 1'b0 && alu_out != 4'b0010) begin
			$display("failed");
			failedTests = failedTests + 1;
		end else begin
			$display("passed");
		end
		
	
		//sw
		$display("Store Word Test");
      instr_op = 6'b101011;  
		alu_op = 2'b00;
		$write("Store word ");
		totalTests = totalTests + 1;
		#100;
		if (alu_src != 1'b1 && reg_write != 1'b0 && mem_read != 1'b0 && mem_write != 1'b1 && branch != 1'b0 && alu_out != 4'b0010) begin
			$display("failed");
			failedTests = failedTests + 1;
		end else begin
			$display("passed");
		end
		

		
		//beq
		$display("BEQ Test");
      instr_op = 6'b000100;  
		alu_op = 2'b01;
		$write("BEQ ");
		totalTests = totalTests + 1;
		#100;
		if (alu_src != 1'b0 && reg_write != 1'b0 && mem_read != 1'b0 && mem_write != 1'b0 && branch != 1'b1 && alu_out != 4'b0110) begin
			$display("failed");
			failedTests = failedTests + 1;
		end else begin
			$display("passed");
		end
		
		
		//Rwrit
		
		
		
	end
	
	reg[31:0] result;
	reg[31:0] expected = 172;
	integer last_instruction = 44;
	integer passedTests = 0;
//	integer totalTests = 0;
	initial begin
		 wait (prog_count == last_instruction)
		 result = write_reg_addr;
		 $write("Test Case 1: (init.coe)...");
		 #1;
		 totalTests = totalTests + 1;
		 if (result == expected) begin
			  passedTests = passedTests + 1;
			  $display("passed");
		 end else begin
			  $display("failed. Expected %0d but got %0d.",expected,result);
		 end
		 $display("------------------------------------------------------------------");
		 $display("Testing complete\nPassed %0d / %0d tests.",passedTests,totalTests);
		 $display("------------------------------------------------------------------");
	end
		
	
	
	
endmodule