#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 56
#define N_INPUT_2_1 11
#define N_INPUT_3_1 4
#define OUT_HEIGHT_3 56
#define OUT_WIDTH_3 55
#define N_CHAN_3 4
#define OUT_HEIGHT_45 60
#define OUT_WIDTH_45 59
#define N_CHAN_45 4
#define OUT_HEIGHT_4 56
#define OUT_WIDTH_4 55
#define N_FILT_4 16
#define OUT_HEIGHT_7 28
#define OUT_WIDTH_7 27
#define N_FILT_7 16
#define OUT_HEIGHT_46 30
#define OUT_WIDTH_46 29
#define N_CHAN_46 16
#define OUT_HEIGHT_8 28
#define OUT_WIDTH_8 27
#define N_FILT_8 32
#define OUT_HEIGHT_47 30
#define OUT_WIDTH_47 29
#define N_CHAN_47 32
#define OUT_HEIGHT_11 28
#define OUT_WIDTH_11 27
#define N_FILT_11 32
#define OUT_HEIGHT_14 14
#define OUT_WIDTH_14 13
#define N_FILT_14 32
#define OUT_HEIGHT_48 16
#define OUT_WIDTH_48 15
#define N_CHAN_48 32
#define OUT_HEIGHT_15 14
#define OUT_WIDTH_15 13
#define N_FILT_15 64
#define OUT_HEIGHT_49 16
#define OUT_WIDTH_49 15
#define N_CHAN_49 64
#define OUT_HEIGHT_18 14
#define OUT_WIDTH_18 13
#define N_FILT_18 64
#define OUT_HEIGHT_21 7
#define OUT_WIDTH_21 6
#define N_FILT_21 64
#define OUT_HEIGHT_50 9
#define OUT_WIDTH_50 8
#define N_CHAN_50 64
#define OUT_HEIGHT_22 7
#define OUT_WIDTH_22 6
#define N_FILT_22 128
#define OUT_HEIGHT_51 9
#define OUT_WIDTH_51 8
#define N_CHAN_51 128
#define OUT_HEIGHT_25 7
#define OUT_WIDTH_25 6
#define N_FILT_25 128
#define OUT_HEIGHT_28 3
#define OUT_WIDTH_28 3
#define N_FILT_28 128
#define OUT_HEIGHT_52 5
#define OUT_WIDTH_52 5
#define N_CHAN_52 128
#define OUT_HEIGHT_29 3
#define OUT_WIDTH_29 3
#define N_FILT_29 256
#define OUT_HEIGHT_53 5
#define OUT_WIDTH_53 5
#define N_CHAN_53 256
#define OUT_HEIGHT_32 3
#define OUT_WIDTH_32 3
#define N_FILT_32 256
#define N_SIZE_1_35 2304
#define N_LAYER_36 256
#define N_LAYER_39 256
#define N_LAYER_42 1

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<12,4> model_default_t;
typedef ap_fixed<12,4,AP_RND_CONV,AP_SAT> input_t;
typedef ap_fixed<12,4> layer2_t;
typedef ap_fixed<18,8> quantized_em_endcap_table_t;
typedef ap_fixed<12,4> layer3_t;
typedef ap_fixed<12,4> layer45_t;
typedef ap_fixed<32,16> accum4_t;
typedef ap_fixed<12,4,AP_RND_CONV,AP_SAT> layer4_t;
typedef ap_fixed<12,4> weight4_t;
typedef ap_fixed<12,4> bias4_t;
typedef ap_fixed<12,4> layer5_t;
typedef ap_fixed<18,8> q_conv2d_batchnorm_linear_table_t;
typedef ap_fixed<12,4> layer6_t;
typedef ap_fixed<18,8> q_activation_4_table_t;
typedef ap_fixed<12,4> layer7_t;
typedef ap_fixed<12,4> layer46_t;
typedef ap_fixed<32,16> accum8_t;
typedef ap_fixed<12,4,AP_RND_CONV,AP_SAT> layer8_t;
typedef ap_fixed<12,4> weight8_t;
typedef ap_fixed<12,4> bias8_t;
typedef ap_fixed<12,4> layer9_t;
typedef ap_fixed<18,8> q_conv2d_batchnorm_1_linear_table_t;
typedef ap_fixed<12,4> layer10_t;
typedef ap_fixed<18,8> q_activation_5_table_t;
typedef ap_fixed<12,4> layer47_t;
typedef ap_fixed<32,16> accum11_t;
typedef ap_fixed<12,4,AP_RND_CONV,AP_SAT> layer11_t;
typedef ap_fixed<12,4> weight11_t;
typedef ap_fixed<12,4> bias11_t;
typedef ap_fixed<12,4> layer12_t;
typedef ap_fixed<18,8> q_conv2d_batchnorm_2_linear_table_t;
typedef ap_fixed<12,4> layer13_t;
typedef ap_fixed<18,8> q_activation_6_table_t;
typedef ap_fixed<12,4> layer14_t;
typedef ap_fixed<12,4> layer48_t;
typedef ap_fixed<32,16> accum15_t;
typedef ap_fixed<12,4,AP_RND_CONV,AP_SAT> layer15_t;
typedef ap_fixed<12,4> weight15_t;
typedef ap_fixed<12,4> bias15_t;
typedef ap_fixed<12,4> layer16_t;
typedef ap_fixed<18,8> q_conv2d_batchnorm_3_linear_table_t;
typedef ap_fixed<12,4> layer17_t;
typedef ap_fixed<18,8> q_activation_7_table_t;
typedef ap_fixed<12,4> layer49_t;
typedef ap_fixed<32,16> accum18_t;
typedef ap_fixed<12,4,AP_RND_CONV,AP_SAT> layer18_t;
typedef ap_fixed<12,4> weight18_t;
typedef ap_fixed<12,4> bias18_t;
typedef ap_fixed<12,4> layer19_t;
typedef ap_fixed<18,8> q_conv2d_batchnorm_4_linear_table_t;
typedef ap_fixed<12,4> layer20_t;
typedef ap_fixed<18,8> q_activation_8_table_t;
typedef ap_fixed<12,4> layer21_t;
typedef ap_fixed<12,4> layer50_t;
typedef ap_fixed<32,16> accum22_t;
typedef ap_fixed<12,4,AP_RND_CONV,AP_SAT> layer22_t;
typedef ap_fixed<12,4> weight22_t;
typedef ap_fixed<12,4> bias22_t;
typedef ap_fixed<12,4> layer23_t;
typedef ap_fixed<18,8> q_conv2d_batchnorm_5_linear_table_t;
typedef ap_fixed<12,4> layer24_t;
typedef ap_fixed<18,8> q_activation_9_table_t;
typedef ap_fixed<12,4> layer51_t;
typedef ap_fixed<32,16> accum25_t;
typedef ap_fixed<12,4,AP_RND_CONV,AP_SAT> layer25_t;
typedef ap_fixed<12,4> weight25_t;
typedef ap_fixed<12,4> bias25_t;
typedef ap_fixed<12,4> layer26_t;
typedef ap_fixed<18,8> q_conv2d_batchnorm_6_linear_table_t;
typedef ap_fixed<12,4> layer27_t;
typedef ap_fixed<18,8> q_activation_10_table_t;
typedef ap_fixed<12,4> layer28_t;
typedef ap_fixed<12,4> layer52_t;
typedef ap_fixed<32,16> accum29_t;
typedef ap_fixed<12,4,AP_RND_CONV,AP_SAT> layer29_t;
typedef ap_fixed<12,4> weight29_t;
typedef ap_fixed<12,4> bias29_t;
typedef ap_fixed<12,4> layer30_t;
typedef ap_fixed<18,8> q_conv2d_batchnorm_7_linear_table_t;
typedef ap_fixed<12,4> layer31_t;
typedef ap_fixed<18,8> q_activation_11_table_t;
typedef ap_fixed<12,4> layer53_t;
typedef ap_fixed<32,16> accum32_t;
typedef ap_fixed<12,4,AP_RND_CONV,AP_SAT> layer32_t;
typedef ap_fixed<12,4> weight32_t;
typedef ap_fixed<12,4> bias32_t;
typedef ap_fixed<12,4> layer33_t;
typedef ap_fixed<18,8> q_conv2d_batchnorm_8_linear_table_t;
typedef ap_fixed<12,4> layer34_t;
typedef ap_fixed<18,8> q_activation_12_table_t;
typedef ap_fixed<32,16> accum36_t;
typedef ap_fixed<12,4,AP_RND_CONV,AP_SAT> layer36_t;
typedef ap_fixed<12,4> weight36_t;
typedef ap_fixed<12,4> bias36_t;
typedef ap_uint<1> layer36_index;
typedef ap_fixed<12,4> layer37_t;
typedef ap_fixed<18,8> q_dense_batchnorm_linear_table_t;
typedef ap_fixed<12,4> layer38_t;
typedef ap_fixed<18,8> q_activation_13_table_t;
typedef ap_fixed<32,16> accum39_t;
typedef ap_fixed<12,4,AP_RND_CONV,AP_SAT> layer39_t;
typedef ap_fixed<12,4> weight39_t;
typedef ap_fixed<12,4> bias39_t;
typedef ap_uint<1> layer39_index;
typedef ap_fixed<12,4> layer40_t;
typedef ap_fixed<18,8> q_dense_batchnorm_1_linear_table_t;
typedef ap_fixed<12,4> layer41_t;
typedef ap_fixed<18,8> q_activation_14_table_t;
typedef ap_fixed<32,16> accum42_t;
typedef ap_fixed<16,11,AP_RND_CONV,AP_SAT> result_t;
typedef ap_fixed<12,4> weight42_t;
typedef ap_fixed<12,4> bias42_t;
typedef ap_uint<1> layer42_index;

#endif
