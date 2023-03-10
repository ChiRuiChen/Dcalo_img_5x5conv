//
//    rfnoc-hls-neuralnet: Vivado HLS code for neural-net building blocks
//
//    Copyright (C) 2017 EJ Kreinar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    hls::stream<input_t> &em_endcap,
    hls::stream<result_t> &layer42_out
) {

    //hls-fpga-machine-learning insert IO
    #pragma HLS INTERFACE axis port=em_endcap,layer42_out 
    #pragma HLS DATAFLOW 

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        //hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<weight4_t, 1600>(w4, "w4.txt");
        nnet::load_weights_from_txt<bias4_t, 16>(b4, "b4.txt");
        nnet::load_weights_from_txt<weight8_t, 4608>(w8, "w8.txt");
        nnet::load_weights_from_txt<bias8_t, 32>(b8, "b8.txt");
        nnet::load_weights_from_txt<weight11_t, 9216>(w11, "w11.txt");
        nnet::load_weights_from_txt<bias11_t, 32>(b11, "b11.txt");
        nnet::load_weights_from_txt<weight15_t, 18432>(w15, "w15.txt");
        nnet::load_weights_from_txt<bias15_t, 64>(b15, "b15.txt");
        nnet::load_weights_from_txt<weight18_t, 36864>(w18, "w18.txt");
        nnet::load_weights_from_txt<bias18_t, 64>(b18, "b18.txt");
        nnet::load_weights_from_txt<weight22_t, 73728>(w22, "w22.txt");
        nnet::load_weights_from_txt<bias22_t, 128>(b22, "b22.txt");
        nnet::load_weights_from_txt<weight25_t, 147456>(w25, "w25.txt");
        nnet::load_weights_from_txt<bias25_t, 128>(b25, "b25.txt");
        nnet::load_weights_from_txt<weight29_t, 294912>(w29, "w29.txt");
        nnet::load_weights_from_txt<bias29_t, 256>(b29, "b29.txt");
        nnet::load_weights_from_txt<weight32_t, 589824>(w32, "w32.txt");
        nnet::load_weights_from_txt<bias32_t, 256>(b32, "b32.txt");
        nnet::load_weights_from_txt<weight36_t, 589824>(w36, "w36.txt");
        nnet::load_weights_from_txt<bias36_t, 256>(b36, "b36.txt");
        nnet::load_weights_from_txt<weight39_t, 65536>(w39, "w39.txt");
        nnet::load_weights_from_txt<bias39_t, 256>(b39, "b39.txt");
        nnet::load_weights_from_txt<weight42_t, 256>(w42, "w42.txt");
        nnet::load_weights_from_txt<bias42_t, 1>(b42, "b42.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    //hls-fpga-machine-learning insert layers

    hls::stream<layer2_t> layer2_out("layer2_out");
    #pragma HLS STREAM variable=layer2_out depth=616
    nnet::linear_ss<input_t, layer2_t, linear_config2>(em_endcap, layer2_out); // quantized_em_endcap

    hls::stream<layer3_t> layer3_out("layer3_out");
    #pragma HLS STREAM variable=layer3_out depth=3080
    nnet::resize_nearest_ss<layer2_t, config3>(layer2_out, layer3_out); // up_sampling2d

    hls::stream<layer45_t> layer45_out("layer45_out");
    #pragma HLS STREAM variable=layer45_out depth=3540
    nnet::zeropad2d_cl_ss<layer3_t, layer45_t, config45>(layer3_out, layer45_out); // zp2d_q_conv2d_batchnorm

    hls::stream<layer4_t> layer4_out("layer4_out");
    #pragma HLS STREAM variable=layer4_out depth=3080
    nnet::conv_2d_cl_ss<layer45_t, layer4_t, config4>(layer45_out, layer4_out, w4, b4); // q_conv2d_batchnorm

    hls::stream<layer5_t> layer5_out("layer5_out");
    #pragma HLS STREAM variable=layer5_out depth=3080
    nnet::linear_ss<layer4_t, layer5_t, linear_config5>(layer4_out, layer5_out); // q_conv2d_batchnorm_linear

    hls::stream<layer6_t> layer6_out("layer6_out");
    #pragma HLS STREAM variable=layer6_out depth=3080
    nnet::relu_ss<layer5_t, layer6_t, relu_config6>(layer5_out, layer6_out); // q_activation_4

    hls::stream<layer7_t> layer7_out("layer7_out");
    #pragma HLS STREAM variable=layer7_out depth=756
    nnet::pooling2d_cl_ss<layer6_t, layer7_t, config7>(layer6_out, layer7_out); // max_pooling2d

    hls::stream<layer46_t> layer46_out("layer46_out");
    #pragma HLS STREAM variable=layer46_out depth=870
    nnet::zeropad2d_cl_ss<layer7_t, layer46_t, config46>(layer7_out, layer46_out); // zp2d_q_conv2d_batchnorm_1

    hls::stream<layer8_t> layer8_out("layer8_out");
    #pragma HLS STREAM variable=layer8_out depth=756
    nnet::conv_2d_cl_ss<layer46_t, layer8_t, config8>(layer46_out, layer8_out, w8, b8); // q_conv2d_batchnorm_1

    hls::stream<layer9_t> layer9_out("layer9_out");
    #pragma HLS STREAM variable=layer9_out depth=756
    nnet::linear_ss<layer8_t, layer9_t, linear_config9>(layer8_out, layer9_out); // q_conv2d_batchnorm_1_linear

    hls::stream<layer10_t> layer10_out("layer10_out");
    #pragma HLS STREAM variable=layer10_out depth=756
    nnet::relu_ss<layer9_t, layer10_t, relu_config10>(layer9_out, layer10_out); // q_activation_5

    hls::stream<layer47_t> layer47_out("layer47_out");
    #pragma HLS STREAM variable=layer47_out depth=870
    nnet::zeropad2d_cl_ss<layer10_t, layer47_t, config47>(layer10_out, layer47_out); // zp2d_q_conv2d_batchnorm_2

    hls::stream<layer11_t> layer11_out("layer11_out");
    #pragma HLS STREAM variable=layer11_out depth=756
    nnet::conv_2d_cl_ss<layer47_t, layer11_t, config11>(layer47_out, layer11_out, w11, b11); // q_conv2d_batchnorm_2

    hls::stream<layer12_t> layer12_out("layer12_out");
    #pragma HLS STREAM variable=layer12_out depth=756
    nnet::linear_ss<layer11_t, layer12_t, linear_config12>(layer11_out, layer12_out); // q_conv2d_batchnorm_2_linear

    hls::stream<layer13_t> layer13_out("layer13_out");
    #pragma HLS STREAM variable=layer13_out depth=756
    nnet::relu_ss<layer12_t, layer13_t, relu_config13>(layer12_out, layer13_out); // q_activation_6

    hls::stream<layer14_t> layer14_out("layer14_out");
    #pragma HLS STREAM variable=layer14_out depth=182
    nnet::pooling2d_cl_ss<layer13_t, layer14_t, config14>(layer13_out, layer14_out); // max_pooling2d_1

    hls::stream<layer48_t> layer48_out("layer48_out");
    #pragma HLS STREAM variable=layer48_out depth=240
    nnet::zeropad2d_cl_ss<layer14_t, layer48_t, config48>(layer14_out, layer48_out); // zp2d_q_conv2d_batchnorm_3

    hls::stream<layer15_t> layer15_out("layer15_out");
    #pragma HLS STREAM variable=layer15_out depth=182
    nnet::conv_2d_cl_ss<layer48_t, layer15_t, config15>(layer48_out, layer15_out, w15, b15); // q_conv2d_batchnorm_3

    hls::stream<layer16_t> layer16_out("layer16_out");
    #pragma HLS STREAM variable=layer16_out depth=182
    nnet::linear_ss<layer15_t, layer16_t, linear_config16>(layer15_out, layer16_out); // q_conv2d_batchnorm_3_linear

    hls::stream<layer17_t> layer17_out("layer17_out");
    #pragma HLS STREAM variable=layer17_out depth=182
    nnet::relu_ss<layer16_t, layer17_t, relu_config17>(layer16_out, layer17_out); // q_activation_7

    hls::stream<layer49_t> layer49_out("layer49_out");
    #pragma HLS STREAM variable=layer49_out depth=240
    nnet::zeropad2d_cl_ss<layer17_t, layer49_t, config49>(layer17_out, layer49_out); // zp2d_q_conv2d_batchnorm_4

    hls::stream<layer18_t> layer18_out("layer18_out");
    #pragma HLS STREAM variable=layer18_out depth=182
    nnet::conv_2d_cl_ss<layer49_t, layer18_t, config18>(layer49_out, layer18_out, w18, b18); // q_conv2d_batchnorm_4

    hls::stream<layer19_t> layer19_out("layer19_out");
    #pragma HLS STREAM variable=layer19_out depth=182
    nnet::linear_ss<layer18_t, layer19_t, linear_config19>(layer18_out, layer19_out); // q_conv2d_batchnorm_4_linear

    hls::stream<layer20_t> layer20_out("layer20_out");
    #pragma HLS STREAM variable=layer20_out depth=182
    nnet::relu_ss<layer19_t, layer20_t, relu_config20>(layer19_out, layer20_out); // q_activation_8

    hls::stream<layer21_t> layer21_out("layer21_out");
    #pragma HLS STREAM variable=layer21_out depth=42
    nnet::pooling2d_cl_ss<layer20_t, layer21_t, config21>(layer20_out, layer21_out); // max_pooling2d_2

    hls::stream<layer50_t> layer50_out("layer50_out");
    #pragma HLS STREAM variable=layer50_out depth=72
    nnet::zeropad2d_cl_ss<layer21_t, layer50_t, config50>(layer21_out, layer50_out); // zp2d_q_conv2d_batchnorm_5

    hls::stream<layer22_t> layer22_out("layer22_out");
    #pragma HLS STREAM variable=layer22_out depth=42
    nnet::conv_2d_cl_ss<layer50_t, layer22_t, config22>(layer50_out, layer22_out, w22, b22); // q_conv2d_batchnorm_5

    hls::stream<layer23_t> layer23_out("layer23_out");
    #pragma HLS STREAM variable=layer23_out depth=42
    nnet::linear_ss<layer22_t, layer23_t, linear_config23>(layer22_out, layer23_out); // q_conv2d_batchnorm_5_linear

    hls::stream<layer24_t> layer24_out("layer24_out");
    #pragma HLS STREAM variable=layer24_out depth=42
    nnet::relu_ss<layer23_t, layer24_t, relu_config24>(layer23_out, layer24_out); // q_activation_9

    hls::stream<layer51_t> layer51_out("layer51_out");
    #pragma HLS STREAM variable=layer51_out depth=72
    nnet::zeropad2d_cl_ss<layer24_t, layer51_t, config51>(layer24_out, layer51_out); // zp2d_q_conv2d_batchnorm_6

    hls::stream<layer25_t> layer25_out("layer25_out");
    #pragma HLS STREAM variable=layer25_out depth=42
    nnet::conv_2d_cl_ss<layer51_t, layer25_t, config25>(layer51_out, layer25_out, w25, b25); // q_conv2d_batchnorm_6

    hls::stream<layer26_t> layer26_out("layer26_out");
    #pragma HLS STREAM variable=layer26_out depth=42
    nnet::linear_ss<layer25_t, layer26_t, linear_config26>(layer25_out, layer26_out); // q_conv2d_batchnorm_6_linear

    hls::stream<layer27_t> layer27_out("layer27_out");
    #pragma HLS STREAM variable=layer27_out depth=42
    nnet::relu_ss<layer26_t, layer27_t, relu_config27>(layer26_out, layer27_out); // q_activation_10

    hls::stream<layer28_t> layer28_out("layer28_out");
    #pragma HLS STREAM variable=layer28_out depth=9
    nnet::pooling2d_cl_ss<layer27_t, layer28_t, config28>(layer27_out, layer28_out); // max_pooling2d_3

    hls::stream<layer52_t> layer52_out("layer52_out");
    #pragma HLS STREAM variable=layer52_out depth=25
    nnet::zeropad2d_cl_ss<layer28_t, layer52_t, config52>(layer28_out, layer52_out); // zp2d_q_conv2d_batchnorm_7

    hls::stream<layer29_t> layer29_out("layer29_out");
    #pragma HLS STREAM variable=layer29_out depth=9
    nnet::conv_2d_cl_ss<layer52_t, layer29_t, config29>(layer52_out, layer29_out, w29, b29); // q_conv2d_batchnorm_7

    hls::stream<layer30_t> layer30_out("layer30_out");
    #pragma HLS STREAM variable=layer30_out depth=9
    nnet::linear_ss<layer29_t, layer30_t, linear_config30>(layer29_out, layer30_out); // q_conv2d_batchnorm_7_linear

    hls::stream<layer31_t> layer31_out("layer31_out");
    #pragma HLS STREAM variable=layer31_out depth=9
    nnet::relu_ss<layer30_t, layer31_t, relu_config31>(layer30_out, layer31_out); // q_activation_11

    hls::stream<layer53_t> layer53_out("layer53_out");
    #pragma HLS STREAM variable=layer53_out depth=25
    nnet::zeropad2d_cl_ss<layer31_t, layer53_t, config53>(layer31_out, layer53_out); // zp2d_q_conv2d_batchnorm_8

    hls::stream<layer32_t> layer32_out("layer32_out");
    #pragma HLS STREAM variable=layer32_out depth=9
    nnet::conv_2d_cl_ss<layer53_t, layer32_t, config32>(layer53_out, layer32_out, w32, b32); // q_conv2d_batchnorm_8

    hls::stream<layer33_t> layer33_out("layer33_out");
    #pragma HLS STREAM variable=layer33_out depth=9
    nnet::linear_ss<layer32_t, layer33_t, linear_config33>(layer32_out, layer33_out); // q_conv2d_batchnorm_8_linear

    hls::stream<layer34_t> layer34_out("layer34_out");
    #pragma HLS STREAM variable=layer34_out depth=9
    nnet::relu_ss<layer33_t, layer34_t, relu_config34>(layer33_out, layer34_out); // q_activation_12

    hls::stream<layer36_t> layer36_out("layer36_out");
    #pragma HLS STREAM variable=layer36_out depth=1
    nnet::dense_ss<layer34_t, layer36_t, config36>(layer34_out, layer36_out, w36, b36); // q_dense_batchnorm

    hls::stream<layer37_t> layer37_out("layer37_out");
    #pragma HLS STREAM variable=layer37_out depth=1
    nnet::linear_ss<layer36_t, layer37_t, linear_config37>(layer36_out, layer37_out); // q_dense_batchnorm_linear

    hls::stream<layer38_t> layer38_out("layer38_out");
    #pragma HLS STREAM variable=layer38_out depth=1
    nnet::relu_ss<layer37_t, layer38_t, relu_config38>(layer37_out, layer38_out); // q_activation_13

    hls::stream<layer39_t> layer39_out("layer39_out");
    #pragma HLS STREAM variable=layer39_out depth=1
    nnet::dense_ss<layer38_t, layer39_t, config39>(layer38_out, layer39_out, w39, b39); // q_dense_batchnorm_1

    hls::stream<layer40_t> layer40_out("layer40_out");
    #pragma HLS STREAM variable=layer40_out depth=1
    nnet::linear_ss<layer39_t, layer40_t, linear_config40>(layer39_out, layer40_out); // q_dense_batchnorm_1_linear

    hls::stream<layer41_t> layer41_out("layer41_out");
    #pragma HLS STREAM variable=layer41_out depth=1
    nnet::relu_ss<layer40_t, layer41_t, relu_config41>(layer40_out, layer41_out); // q_activation_14

    nnet::dense_ss<layer41_t, result_t, config42>(layer41_out, layer42_out, w42, b42); // q_dense

}
