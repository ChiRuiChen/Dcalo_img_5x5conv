//Numpy array shape [5, 5, 4, 16]
//Min -0.382812500000
//Max 0.359375000000
//Number of zeros 22

#ifndef W4_H_
#define W4_H_

#ifndef __SYNTHESIS__
weight4_t w4[1600];
#else
weight4_t w4[1600] = {0.37500000, 0.20312500, 1.48437500, -0.25781250, 0.01562500, -0.07812500, 0.57031250, 1.45703125, -0.07812500, 0.23828125, -0.82421875, -0.22265625, 0.33984375, 0.98828125, -1.25781250, 0.73046875, 0.03515625, 1.37890625, -0.11328125, 0.41796875, -0.01953125, -1.29687500, 0.02734375, 0.78125000, -0.93359375, -1.13281250, 1.12890625, 0.43359375, 1.63281250, -1.12500000, 0.00000000, 0.05468750, -0.13671875, 0.26171875, -0.05468750, -0.26171875, 0.31250000, -1.03515625, -0.94140625, 1.11718750, -0.50781250, 0.52734375, 0.28125000, -0.30078125, -0.14843750, 1.62109375, 0.73437500, 0.66796875, 1.00390625, 0.92968750, 0.45312500, -1.07812500, 0.46875000, 0.99609375, -0.03515625, -0.22656250, -0.37890625, 1.08593750, -0.24218750, -0.26953125, -0.83203125, 0.89843750, 0.31250000, 0.17187500, -1.29687500, 0.38281250, 0.19531250, 0.98046875, 0.80468750, -0.70312500, -0.06640625, 0.44140625, 0.86718750, -0.64062500, -0.45703125, 0.35546875, 0.10937500, -0.23046875, 0.55468750, -0.01171875, -1.42968750, -0.99609375, 0.95312500, 0.57812500, -0.44140625, -0.91796875, 0.19531250, -0.12109375, -1.09765625, -0.61718750, -1.19140625, 0.32031250, 0.39062500, -0.88671875, -0.25781250, -0.12109375, -0.29296875, -1.90625000, 0.12890625, -1.23437500, 0.12500000, 1.26562500, 0.34375000, 0.19140625, 0.05468750, 0.85156250, 0.99609375, 0.83984375, 0.64453125, 1.07031250, 0.70312500, -0.52343750, -0.14843750, 0.66796875, 0.11328125, 0.51562500, -0.66406250, 0.34765625, 0.03515625, -0.19921875, 0.45703125, 0.46093750, 0.39062500, -0.12500000, 0.02734375, 0.21093750, 0.00390625, 0.48046875, 0.95703125, -0.00781250, -0.11718750, 0.67968750, -0.25390625, 0.64453125, 0.01171875, -0.18359375, 0.64843750, 0.33984375, 0.43359375, -0.35937500, -0.38671875, 1.34765625, 0.42578125, 0.35156250, -0.63671875, -0.34765625, 0.39843750, 0.02343750, 0.01562500, 0.64843750, -0.08593750, 0.07031250, -0.68750000, 0.15234375, -0.19531250, 0.40625000, 0.09765625, 0.56250000, -0.21093750, 0.28515625, 0.01562500, 0.25390625, 0.21875000, -0.21093750, -0.45703125, 0.66015625, 0.21093750, -0.50390625, 0.59375000, 0.55468750, -0.33984375, -0.53125000, 0.09375000, 0.31250000, -0.07812500, -0.39843750, -0.19531250, 0.07031250, 0.12109375, 0.42187500, -0.33593750, 0.33203125, -0.01171875, 0.68359375, 0.29687500, 0.75390625, -0.34765625, 0.24218750, -0.69921875, 0.60156250, -0.12890625, -0.23046875, -0.36328125, 0.76953125, 0.60546875, -0.37500000, -0.20703125, 1.11718750, 0.97265625, 0.46875000, 0.16015625, -0.30078125, -0.44921875, 0.12500000, 0.16406250, -0.14062500, 0.19140625, 0.43750000, 0.63281250, -0.47656250, 0.44531250, 0.03125000, -0.44531250, 0.40625000, 0.12890625, -0.03125000, -0.07031250, -0.83203125, 0.55468750, -0.44531250, -0.51562500, 0.66406250, 0.48046875, -0.93750000, 0.38281250, -0.14453125, 0.01953125, 0.16015625, 0.08203125, -0.62109375, 0.83593750, 0.88281250, -0.50781250, -0.49609375, 0.65234375, -0.35156250, 0.13281250, -0.45703125, 1.03906250, 0.95703125, 0.58203125, -0.14062500, 0.11328125, 0.11328125, -0.21484375, -0.48828125, 0.47656250, -0.07421875, -0.21875000, 0.37109375, 0.89062500, 0.28906250, 0.32812500, 0.86328125, 0.89062500, -0.66796875, 0.24609375, 0.24609375, 0.92187500, 0.42187500, 0.69531250, 0.10546875, 0.22265625, 0.41015625, 0.22265625, -0.66796875, -0.88281250, -0.07812500, 0.05078125, 0.32421875, 0.12109375, 0.36328125, 0.83203125, -0.47656250, 0.23828125, -0.21093750, 0.30859375, -0.41796875, 0.64843750, -0.12109375, 0.14062500, 0.34765625, 1.62890625, 0.42968750, 0.69140625, 0.19921875, 0.23046875, -0.03906250, 0.30078125, 0.40625000, -0.07812500, -0.17578125, 0.41406250, -0.69140625, 0.55468750, -0.33203125, -0.91015625, 0.91406250, -0.28515625, -0.42187500, 0.39453125, 1.21093750, 0.65625000, 0.65234375, 0.89062500, 0.73046875, 0.73046875, 0.40625000, 0.06640625, -0.03906250, 0.06250000, 0.16015625, 0.19531250, 0.08984375, -0.79687500, -0.28906250, 0.61328125, -0.39062500, 0.05078125, 0.66796875, 0.11328125, 0.75000000, -0.02343750, -0.35546875, 0.22265625, 0.28515625, 0.30859375, -0.44531250, 0.53906250, -0.26171875, 1.32421875, 0.28125000, 0.23437500, 0.29687500, 0.50000000, -0.08984375, -0.38671875, -0.08203125, 0.03125000, -0.06640625, 0.07812500, -0.40625000, 0.76953125, 0.12890625, 0.62500000, -0.82421875, -0.31640625, -0.05078125, -0.51171875, -0.61718750, -0.29296875, -0.01562500, 0.93359375, -0.30078125, 0.39453125, -0.03515625, 1.06250000, 0.32031250, 0.47265625, -0.08984375, 0.30468750, 0.25000000, 0.05078125, -0.22656250, -0.17968750, 0.76562500, 0.70312500, 0.08593750, -0.24218750, 1.20312500, -0.19531250, 0.37890625, -0.66796875, -0.50781250, 0.15234375, 0.64062500, -0.32031250, 0.30859375, 0.27734375, -0.59375000, 0.16796875, 0.17187500, -0.22656250, -0.06250000, -0.42968750, 0.34765625, 0.52343750, -0.10156250, 0.09375000, 1.17578125, 0.19140625, 0.41015625, 0.10937500, -0.49218750, 0.26171875, -0.66015625, 0.89062500, -0.46875000, -0.21484375, -0.00390625, -0.28515625, 0.46484375, 0.66796875, 0.19140625, -0.15234375, 0.59765625, -0.44531250, 0.48046875, -0.11328125, 0.24218750, 0.38281250, -0.11328125, 0.02734375, 0.46484375, 0.79687500, 0.41406250, -0.46093750, 0.48828125, -0.35546875, -0.37109375, -0.18750000, -0.10156250, 0.84375000, 0.22265625, -0.68750000, 0.29296875, -0.03906250, 0.00781250, -0.16796875, 0.68750000, 0.03515625, 0.37500000, 0.07812500, 0.76171875, -0.03125000, -0.33203125, -0.98046875, 0.33203125, 1.06250000, 0.65234375, -0.01171875, 0.04296875, 0.21484375, 0.10937500, 0.35156250, 0.28515625, 0.39062500, 0.01953125, -0.12109375, 0.13671875, -0.41015625, -0.32812500, -0.41796875, 0.56250000, 0.19140625, 0.32812500, 0.26171875, 0.59375000, 0.57812500, -0.41796875, 0.15234375, 0.88671875, 0.45312500, -0.16796875, 0.27734375, 0.06640625, 0.43750000, 0.24218750, -0.51953125, 0.76171875, 0.05859375, -0.26953125, 0.58593750, 0.28906250, 0.05078125, 0.35156250, -0.11718750, 0.18750000, -0.37109375, -0.60546875, 0.72656250, -0.09375000, 0.59375000, 0.84765625, 0.32421875, 0.33203125, 1.25390625, -0.05468750, -0.23828125, 0.58593750, 0.39453125, -0.20703125, -0.26562500, 0.64453125, 0.79687500, -0.13671875, 0.21875000, -0.11328125, 0.22265625, -0.57421875, -0.39453125, 0.81640625, -0.35156250, -0.26953125, 0.44140625, 0.83593750, 0.30078125, -0.80078125, 0.06250000, 0.35156250, -0.10937500, -0.48437500, -0.71875000, 0.67187500, -0.12500000, 0.03515625, -0.34375000, 0.10156250, -0.77734375, 0.20703125, 0.43359375, 0.10937500, -0.59765625, 0.09765625, -0.71093750, 0.10546875, -0.90234375, 0.32031250, -1.09765625, 0.91796875, 0.42187500, -0.11718750, 0.12109375, 0.58203125, 0.35937500, 0.30468750, -0.12890625, 0.11718750, -0.94921875, -0.04296875, 0.96484375, 0.36718750, -1.20703125, 0.27343750, -0.13671875, 0.30078125, -1.05859375, -0.06640625, -0.20312500, 0.47265625, -0.27734375, -0.14843750, -0.76562500, 0.51171875, -0.09375000, 0.90625000, 0.26562500, -0.46484375, -0.42578125, -0.45312500, -0.65625000, 0.46093750, 0.56250000, 0.41015625, 0.22656250, -0.34765625, -1.07421875, -0.61328125, 0.66406250, -0.23828125, -1.26562500, 0.29296875, -0.98828125, -0.07031250, -1.27734375, 0.00390625, -0.00781250, -0.05859375, -0.38671875, 0.18750000, -0.16406250, -0.89843750, -1.08203125, -0.02734375, 1.19921875, -0.27734375, -0.23437500, -0.01953125, -0.12890625, 0.42187500, -1.17187500, -0.31640625, 0.52734375, -0.67578125, -0.06640625, -0.31250000, 0.26562500, -0.03515625, -0.54687500, -0.62890625, -1.17968750, 0.44531250, 0.12500000, -0.11328125, 0.53515625, 0.89062500, -0.27734375, -1.02343750, 0.24609375, 0.16015625, -0.16406250, 0.82812500, -0.14843750, 0.93359375, 1.48828125, -0.81640625, 0.23437500, -0.32421875, -0.77343750, -0.33203125, 0.45703125, 0.66796875, -0.14062500, -0.20312500, -0.12890625, 1.07421875, 0.83203125, -0.95703125, 0.76562500, -0.75781250, 0.15234375, -0.03906250, -0.53515625, -0.37109375, -0.29296875, -0.89453125, 0.11718750, -1.32421875, -0.23437500, -0.38671875, 0.19531250, 0.23046875, 0.05078125, -0.97656250, 0.44921875, -0.17578125, 0.38281250, -0.16796875, -0.10937500, -1.28515625, 0.92187500, -0.52734375, 0.37500000, -0.55078125, -0.48046875, 1.01953125, -0.19531250, -0.71875000, -0.30078125, 0.54687500, -0.08984375, 0.56250000, -0.23828125, -0.33593750, -0.04296875, 0.73046875, 0.16015625, 0.28515625, 0.58593750, 0.71875000, 0.00000000, 0.51562500, 0.64843750, 0.95703125, -0.12500000, -0.32421875, 0.27734375, 0.08593750, -0.37500000, -0.15625000, 0.29296875, 0.38281250, -0.16015625, 0.56640625, 0.05859375, 0.78125000, 0.20312500, -0.47656250, 1.19531250, 0.46093750, 0.28906250, -0.85546875, -0.00390625, 0.42968750, -0.76953125, -0.18750000, -0.08984375, 0.39453125, -0.32421875, -0.26171875, 0.06250000, -0.41796875, 1.14453125, -0.44140625, 0.78125000, 0.74609375, -0.47265625, 0.15234375, -1.07031250, -0.30859375, 0.98828125, -0.17187500, 0.91796875, 0.96875000, 0.36328125, 0.53515625, 0.46875000, 0.46875000, -0.12500000, 0.37500000, 1.39453125, 0.47656250, 0.20703125, 0.99218750, -0.32031250, -1.61328125, 0.33984375, 0.56640625, 0.44531250, -0.76953125, -0.13281250, 0.00390625, -0.50390625, -2.00390625, -0.75390625, 1.42578125, 0.89062500, 0.80859375, 0.56640625, 0.39062500, -0.37109375, 0.19140625, 2.54687500, -1.89453125, 0.89453125, 0.05078125, -0.00390625, 0.39062500, -0.45703125, 0.87890625, -0.69140625, 0.61328125, 0.19531250, 0.49218750, 0.17578125, 0.15625000, 0.17187500, 0.10156250, 1.10937500, 0.58593750, 1.06640625, -0.58593750, 0.42968750, -0.53125000, 0.15234375, -1.36328125, -0.12500000, 0.12500000, 0.85546875, 0.01171875, 1.46484375, -0.62890625, -0.48437500, -0.84375000, -1.57421875, 0.62109375, -0.05078125, -1.09375000, -0.21484375, -0.36328125, -0.83984375, -0.08984375, -1.00781250, -0.53906250, 0.65234375, -0.40234375, -0.00390625, 0.17187500, 1.08203125, -0.06640625, -0.80078125, -0.43750000, 0.26171875, 0.55468750, 0.79687500, 0.02343750, -0.31640625, 0.68750000, -1.00390625, -0.63281250, 0.03906250, -0.36718750, -0.58984375, 0.49218750, -0.15234375, -0.16406250, -0.25781250, 0.39453125, -0.23828125, 0.12890625, -0.40234375, -0.16015625, -0.12500000, 0.13281250, 0.35546875, -0.12890625, -0.05859375, 0.09375000, -0.14843750, -0.05468750, 0.34375000, 0.04687500, -0.39453125, -0.05468750, 0.27734375, -0.35937500, -0.01562500, -0.12109375, 0.13281250, -0.18750000, -0.17187500, -0.20312500, 0.40625000, -0.07031250, -0.64453125, -0.11718750, -0.14062500, -0.07031250, -0.10937500, -0.04296875, 0.12109375, 0.38671875, -0.92578125, 0.25781250, -0.49609375, -0.33984375, -0.64453125, -0.34765625, 0.04296875, -0.74609375, -0.28906250, -0.46093750, -0.13671875, -0.68359375, -1.12890625, -0.48437500, -0.14843750, -0.32421875, -0.75781250, 0.05078125, -0.06250000, -0.11328125, -0.46484375, -0.43359375, 0.02343750, -0.67578125, -0.48046875, -0.14453125, -0.23828125, -0.22265625, -0.72265625, -0.03125000, -0.41796875, -0.07421875, -0.82031250, -0.09375000, 0.15625000, -0.50781250, -0.57812500, 0.14062500, -0.31640625, -0.25000000, -0.67187500, -0.05859375, -0.05468750, -0.10546875, 0.16406250, -0.02734375, 0.28125000, 0.43750000, -0.44921875, 0.73046875, 0.42578125, 0.13281250, -0.19531250, -0.18359375, -0.60156250, -0.39453125, -0.93359375, -0.24218750, 0.52343750, -0.50000000, 1.06250000, 1.70312500, 1.35546875, 1.08984375, -0.04687500, 0.28906250, -0.01562500, -0.21875000, 0.09765625, -1.10546875, -0.35156250, -0.73828125, 0.62890625, -0.11718750, -0.28125000, -0.18750000, 0.61328125, 0.01562500, 0.17968750, 0.37890625, 1.22265625, -1.00390625, 0.21484375, 0.46484375, 0.09765625, 0.19140625, -0.73046875, 0.21093750, -0.16796875, -0.45703125, 0.13281250, 0.70703125, 1.16406250, -0.38671875, 0.16796875, 0.33593750, -0.08984375, -0.04296875, 0.39062500, -0.60156250, 0.31640625, -0.32031250, 1.79296875, -0.28515625, 0.39453125, -0.65625000, 0.13671875, 0.13281250, 0.39062500, 0.15625000, 0.48828125, -0.40234375, 0.67187500, 0.20312500, -2.03125000, -0.58984375, -0.22656250, 1.06250000, 0.81640625, 0.83203125, -0.15625000, 0.36718750, -0.23046875, 0.59375000, 0.95703125, 0.57812500, 0.08593750, 0.19531250, -0.08203125, -0.62890625, 0.69531250, 1.77343750, 0.72656250, -0.66406250, 0.53125000, 1.15625000, 0.41406250, -1.03515625, -0.48828125, -0.42968750, -0.66406250, -0.73828125, 0.52734375, 0.78125000, -1.12890625, 0.81250000, -0.73828125, 0.75000000, -0.56640625, 0.58203125, 0.24218750, 0.19140625, 0.01562500, 0.14453125, 0.25000000, -0.14453125, -0.88671875, -0.56250000, 0.41796875, 0.06250000, -0.21484375, -0.03515625, 0.37890625, -0.46484375, 0.21093750, -0.39453125, -0.09765625, -0.70312500, 0.07812500, -0.32812500, 0.32812500, -0.21875000, 0.10546875, -0.74609375, 0.18750000, -0.33203125, 0.33984375, -0.33203125, 1.06640625, -0.26562500, 0.37109375, 0.01953125, 0.51953125, -0.08984375, -0.12500000, 0.22265625, -0.33593750, -0.66796875, 0.16406250, 0.64062500, -0.19140625, 0.55859375, -0.23046875, 0.03515625, 0.01953125, 0.08203125, 0.10937500, -0.47265625, -0.96875000, -0.13281250, -0.13671875, -0.26171875, 0.44531250, 0.13281250, 0.29687500, 0.59375000, 0.54296875, 0.32812500, 0.35937500, -0.07031250, -0.08984375, 0.22265625, 0.85937500, -0.81640625, 0.09765625, -0.30468750, -0.02734375, 0.01953125, 0.39453125, -1.11718750, 0.72656250, 0.15625000, -0.37500000, 0.49218750, 0.44140625, 0.33203125, 0.16015625, -1.03906250, 0.90625000, 0.19140625, 0.76171875, -0.16796875, 0.01171875, 0.35546875, -0.05859375, -0.77734375, 0.03125000, 0.19921875, 0.42187500, -0.37109375, -0.16796875, 0.87109375, 0.56640625, -0.32421875, 1.25000000, 0.29687500, 0.36718750, 1.38671875, 0.56250000, 0.51562500, -0.22265625, 0.09765625, 0.34375000, 0.56640625, -0.36718750, -0.09375000, 0.78906250, 0.58984375, -0.48046875, -0.23437500, 0.05078125, -0.32031250, 0.70703125, 0.10546875, -0.10546875, -0.00390625, -0.32812500, -0.28906250, 0.12109375, 0.47265625, 0.83593750, -0.06250000, -0.41796875, 0.81640625, 0.58593750, 0.83593750, 0.42187500, 0.06640625, -0.05468750, 0.23437500, 0.55859375, 0.71875000, -0.40625000, 0.31640625, 0.64062500, 0.91015625, 0.16015625, 0.43750000, 0.12500000, 0.31250000, 0.17578125, 1.58984375, 0.26953125, 0.37500000, -0.07421875, 0.26953125, 0.61328125, 0.13281250, 0.37890625, 0.76171875, 0.35546875, 0.46484375, 0.01562500, 0.11328125, 0.60937500, -0.16796875, -0.73437500, 0.11718750, 0.89062500, 0.40625000, 0.16406250, -0.04296875, 0.10546875, 0.08203125, 0.24218750, 0.37890625, 0.34765625, -0.07031250, 0.75000000, -0.93750000, 0.39453125, 0.23046875, -0.16406250, -0.89453125, -0.65234375, -0.01953125, -0.10546875, -0.62500000, -0.34765625, -0.19140625, -0.10156250, 0.56640625, 0.39843750, 0.92187500, -0.87500000, -0.96875000, 0.12890625, 0.83203125, 0.43750000, 0.70703125, -0.17578125, 0.25390625, 0.34765625, 0.08593750, -0.76953125, 0.30468750, -0.33593750, -0.26171875, 0.22656250, -0.03515625, 0.30078125, -0.28125000, -0.55468750, 0.00781250, -0.16015625, -0.62109375, -0.59765625, -0.57421875, -0.46093750, -0.14062500, -0.12890625, 0.08984375, 0.00781250, -0.42968750, 0.14453125, -0.57421875, 0.61328125, 0.60156250, -1.05078125, -0.44531250, -0.10937500, -0.78906250, -0.14062500, 0.07031250, -0.02734375, -0.43750000, 0.51953125, -0.09765625, -0.26953125, 0.36718750, -0.37500000, 0.39453125, -0.28515625, -0.32421875, -0.01953125, 0.31640625, -0.16796875, 0.10937500, -0.42968750, -0.05468750, -0.05078125, 0.21093750, -0.84375000, 0.00390625, -0.59375000, -0.16796875, -0.43750000, 0.12890625, -0.10156250, 0.32031250, -0.58593750, -0.35546875, -0.04687500, -0.24218750, -0.30078125, 0.62109375, -0.19531250, 0.11718750, -0.24218750, 0.16015625, -0.01953125, -0.14843750, -0.07812500, 0.08203125, 0.26562500, -0.45312500, -0.06250000, 0.21875000, -0.16796875, -0.54687500, -0.20312500, -0.46875000, 0.24218750, -0.37890625, 0.16796875, 0.01562500, -0.17187500, 0.00000000, -0.89453125, -0.60546875, 0.38281250, -0.61328125, -0.80468750, -0.23437500, -0.17578125, -0.87109375, -0.44140625, -0.41796875, -0.13281250, -0.72656250, -0.60546875, 0.18750000, -0.60156250, 0.08203125, -0.67578125, -0.10546875, -0.14453125, 0.04296875, 0.17578125, -0.31640625, 0.10546875, -0.64453125, -0.66015625, 0.12890625, -0.16015625, -0.21484375, -1.01562500, 0.45312500, 0.14843750, -0.13671875, 0.23828125, 0.46484375, -0.21484375, -0.23828125, -0.06640625, -0.51562500, -0.04687500, -0.62890625, -0.22656250, -0.29296875, -0.22656250, 0.56250000, 0.02734375, 0.11328125, 0.26171875, -0.76562500, 0.50781250, 0.05078125, -0.57812500, 0.37500000, 0.41015625, 0.02343750, -0.07812500, -0.12500000, 0.59765625, 0.04687500, -0.16015625, 0.07031250, 0.88671875, 0.35546875, 0.60937500, 0.99609375, 0.07031250, 0.18750000, 0.50000000, 0.35937500, 0.33984375, -0.08984375, 0.03515625, 0.25390625, 0.44531250, -0.27343750, -0.09765625, 0.00781250, 0.12109375, 0.13671875, -0.17968750, 0.36328125, 0.33203125, -0.07031250, 0.01171875, -0.78515625, -0.35156250, -0.09765625, 0.15625000, 0.19140625, 0.16406250, 0.32031250, -0.18750000, 0.19921875, 0.68359375, -0.03515625, 0.10937500, 0.68750000, 0.78906250, 0.11718750, 0.35156250, 0.21484375, 0.39062500, -0.01562500, 0.21093750, 0.23828125, 0.81250000, 0.89453125, 0.69921875, -0.03515625, -0.00390625, -0.07031250, 0.21093750, -0.32812500, 0.49218750, -0.59375000, 0.42578125, 0.12890625, 0.14062500, -0.01171875, 0.21484375, -0.45312500, 0.23828125, -0.48046875, 0.13671875, -0.10156250, 0.83203125, 0.37890625, 0.00390625, 0.05859375, 1.07812500, -0.26562500, -0.00781250, -1.19531250, 0.14843750, 0.16406250, 1.10156250, -2.54296875, 1.26171875, 0.25390625, 0.50781250, -0.18359375, 2.02734375, 2.35937500, -1.28515625, 0.96093750, 0.16015625, -0.54296875, 0.10546875, -0.31640625, 0.35156250, 1.62890625, 0.24218750, -0.21093750, 0.69531250, 0.27343750, 0.59375000, 0.09375000, -0.46093750, 0.13671875, -0.04687500, 1.74609375, 1.97656250, -0.76562500, 0.02734375, 1.26171875, 0.47265625, -0.07812500, 0.34765625, 0.00000000, 0.47656250, -0.25390625, -0.80859375, -1.15234375, 0.84375000, 0.17968750, -0.23046875, 0.83203125, -0.29296875, 0.23437500, -0.13671875, -0.75781250, -0.33593750, 0.03906250, -0.28906250, -0.40625000, 0.09765625, 0.51953125, -0.08593750, -1.24218750, -0.33984375, -0.14843750, -0.95312500, -0.49609375, -0.94531250, -0.64843750, -0.24218750, -0.70312500, 0.71093750, 0.52734375, 1.14453125, -0.12890625, -0.25000000, -1.12890625, 1.38281250, 0.06250000, -0.56250000, -0.50390625, -1.33984375, -1.24218750, -0.71093750, -1.03125000, 0.47656250, 0.42578125, 0.71484375, -0.38281250, 1.21484375, 0.62500000, 0.08984375, -0.07812500, 0.60546875, -0.45703125, -0.48046875, 0.38281250, 0.16796875, -0.33203125, 0.55859375, 0.51171875, 0.23828125, -0.11718750, -1.95312500, 0.45312500, 0.35156250, -0.14062500, 0.21484375, 0.17187500, -0.33984375, -0.90625000, 0.06640625, 0.75390625, -0.46093750, -0.61718750, -0.73437500, 0.05859375, 0.22656250, -0.61718750, 0.61328125, -0.10937500, -1.09765625, -0.92578125, -0.63281250, 1.00390625, 0.42968750, -0.58984375, 0.91406250, -0.14453125, -0.04296875, -0.58984375, 0.66015625, 0.25781250, -0.14062500, -0.46484375, -0.25390625, 0.15234375, -0.14453125, -1.42968750, 0.59765625, -0.05468750, -0.60937500, -0.26171875, -0.80078125, -0.16015625, 0.24609375, 0.41796875, 0.62500000, 1.07812500, -0.68359375, -0.30078125, 0.46093750, -0.33984375, -0.91796875, -0.25000000, -0.16796875, 0.19531250, -0.10156250, -0.85937500, 0.03515625, -0.36718750, 0.19531250, -0.51562500, 0.13281250, 0.03125000, 0.22656250, 0.22265625, 0.84765625, 0.10937500, 0.57421875, 1.43359375, -0.19140625, 1.42968750, 0.69140625, 0.44921875, 0.44921875, -0.01953125, 0.76953125, -0.11718750, 0.34765625, 0.55078125, -0.31250000, 0.25390625, 0.09375000, 0.12890625, -0.09375000, 1.17578125, -0.17968750, 0.00781250, -0.07031250, 0.38281250, 0.52734375, 0.09765625, 0.11328125, -0.10546875, 0.21093750, 0.21093750, 0.23828125, -1.00390625, -0.55468750, 0.33203125, -0.26171875, 0.09375000, -0.47265625, -0.17968750};
#endif

#endif
