/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#ifndef TALLY_H
#define TALLY_H

#include <iostream>

#ifdef tally
	uint64_t calc_unary_simd = 0;
	uint64_t calc_binary_simd = 0;
	uint64_t compare_simd = 0;
	uint64_t create_simd = 0;
	uint64_t extract_simd = 0;
	uint64_t io_load_seq_simd = 0;
	uint64_t io_load_ran_simd = 0;
	uint64_t io_write_seq_simd = 0;
	uint64_t io_write_ran_simd = 0;
	uint64_t logic_simd = 0;
	uint64_t manipulate_simd = 0;

	uint64_t calc_unary_scalar = 0;
	uint64_t calc_binary_scalar = 0;
	uint64_t compare_scalar = 0;
	uint64_t create_scalar = 0;
	uint64_t extract_scalar = 0;
	uint64_t io_load_seq_scalar = 0;
	uint64_t io_load_ran_scalar = 0;
	uint64_t io_write_seq_scalar = 0;
	uint64_t io_write_ran_scalar = 0;
	uint64_t logic_scalar = 0;
	uint64_t manipulate_scalar = 0;

	#define TALLY_CALC_UNARY_SIMD (calc_unary_simd++);
	#define TALLY_CALC_BINARY_SIMD (calc_binary_simd++);
	#define TALLY_COMPARE_SIMD (compare_simd++);
	#define TALLY_CREATE_SIMD (create_simd++);
	#define TALLY_EXTRACT_SIMD (extract_simd++);
	#define TALLY_IO_LOAD_SEQ_SIMD (io_load_seq_simd++);
	#define TALLY_IO_LOAD_RAN_SIMD (io_load_ran_simd++);
	#define TALLY_IO_WRITE_SEQ_SIMD (io_write_seq_simd++);
	#define TALLY_IO_WRITE_RAN_SIMD (io_write_ran_simd++);
	#define TALLY_LOGIC_SIMD (logic_simd++);
	#define TALLY_MANIPULATE_SIMD (manipulate_simd++);

	#define TALLY_CALC_UNARY_SCALAR (calc_unary_scalar++);
	#define TALLY_CALC_BINARY_SCALAR (calc_binary_scalar++);
	#define TALLY_COMPARE_SCALAR (compare_scalar++);
	#define TALLY_CREATE_SCALAR (create_scalar++);
	#define TALLY_EXTRACT_SCALAR (extract_scalar++);
	#define TALLY_IO_LOAD_SEQ_SCALAR (io_load_seq_scalar++);
	#define TALLY_IO_LOAD_RAN_SCALAR (io_load_ran_scalar++);
	#define TALLY_IO_WRITE_SEQ_SCALAR (io_write_seq_scalar++);
	#define TALLY_IO_WRITE_RAN_SCALAR (io_write_ran_scalar++);
	#define TALLY_LOGIC_SCALAR (logic_scalar++);
	#define TALLY_MANIPULATE_SCALAR (manipulate_scalar++);

	void output_tally(char sep = '\t'){
	std::cout << "type"
				<< sep << "calc_un"
				<< sep << "calc_bi"
				<< sep << "compare"
				<< sep << "create"
				<< sep << "extract"
				<< sep << "loa_seq"
				<< sep << "loa_ran"
				<< sep << "wri_seq"
				<< sep << "wri_ran"
				<< sep << "logic"
				<< sep << "manipulate"
				<< std::endl;
	std::cout << "simd"
				<< sep << calc_unary_simd
				<< sep << calc_binary_simd
				<< sep << compare_simd
				<< sep << create_simd
				<< sep << extract_simd
				<< sep << io_load_seq_simd
				<< sep << io_load_ran_simd
				<< sep << io_write_seq_simd
				<< sep << io_write_ran_simd
				<< sep << logic_simd
				<< sep << manipulate_simd
				<< std::endl;
	std::cout << "scalar"
				<< sep << calc_unary_scalar
				<< sep << calc_binary_scalar
				<< sep << compare_scalar
				<< sep << create_scalar
				<< sep << extract_scalar
				<< sep << io_load_seq_scalar
				<< sep << io_load_ran_scalar
				<< sep << io_write_seq_scalar
				<< sep << io_write_ran_scalar
				<< sep << logic_scalar
				<< sep << manipulate_scalar
				<< std::endl;
	}

	void reset_tally(){
		calc_unary_simd = 0;
		calc_binary_simd = 0;
		compare_simd = 0;
		create_simd = 0;
		extract_simd = 0;
		io_load_seq_simd = 0;
		io_load_ran_simd = 0;
		io_write_seq_simd = 0;
		io_write_ran_simd = 0;
		logic_simd = 0;
		manipulate_simd = 0;

		calc_unary_scalar = 0;
		calc_binary_scalar = 0;
		compare_scalar = 0;
		create_scalar = 0;
		extract_scalar = 0;
		io_load_seq_scalar = 0;
		io_load_ran_scalar = 0;
		io_write_seq_scalar = 0;
		io_write_ran_scalar = 0;
		logic_scalar = 0;
		manipulate_scalar = 0;
	}

	#define TALLY_OUTPUT(a) output_tally(a);
	#define TALLY_RESET reset_tally();
#else
	#define TALLY_CALC_UNARY_SIMD
	#define TALLY_CALC_BINARY_SIMD
	#define TALLY_COMPARE_SIMD
	#define TALLY_CREATE_SIMD
	#define TALLY_EXTRACT_SIMD
	#define TALLY_IO_LOAD_SEQ_SIMD
	#define TALLY_IO_LOAD_RAN_SIMD
	#define TALLY_IO_WRITE_SEQ_SIMD
	#define TALLY_IO_WRITE_RAN_SIMD
	#define TALLY_LOGIC_SIMD
	#define TALLY_MANIPULATE_SIMD

	#define TALLY_CALC_UNARY_SCALAR
	#define TALLY_CALC_BINARY_SCALAR
	#define TALLY_COMPARE_SCALAR
	#define TALLY_CREATE_SCALAR
	#define TALLY_EXTRACT_SCALAR
	#define TALLY_IO_LOAD_SEQ_SCALAR
	#define TALLY_IO_LOAD_RAN_SCALAR
	#define TALLY_IO_WRITE_SEQ_SCALAR
	#define TALLY_IO_WRITE_RAN_SCALAR
	#define TALLY_LOGIC_SCALAR
	#define TALLY_MANIPULATE_SCALAR

	#define TALLY_OUTPUT(a)
	#define TALLY_RESET
#endif

#endif
