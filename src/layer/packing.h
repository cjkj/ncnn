// Tencent is pleased to support the open source community by making ncnn available.
//
// Copyright (C) 2019 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
// https://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

#ifndef LAYER_PACKING_H
#define LAYER_PACKING_H

#include "layer.h"

namespace ncnn {

class Packing : public Layer
{
public:
    Packing();

    virtual int load_param(const ParamDict& pd);

    virtual int forward(const Mat& bottom_blob, Mat& top_blob, const Option& opt) const;

public:
    int out_elempack;
    int use_padding;

    // element type
    // 0 = auto
    // 1 = fp32
    // 2 = fp16
    // 3 = int32
    // 4 = int8
    int cast_type_from;
    int cast_type_to;
};

} // namespace ncnn

#endif // LAYER_PACKING_H
