/*
 * Copyright (c) 2017 ARM Limited.
 *
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef __ARM_COMPUTE_IGCSIMPLE2DKERNEL_H__
#define __ARM_COMPUTE_IGCSIMPLE2DKERNEL_H__

#include "arm_compute/core/GLES_COMPUTE/IGCSimpleKernel.h"

namespace arm_compute
{
class IGCTensor;

/** Interface for simple OpenGL ES kernels having 1 tensor input and 1 tensor output. This interface can be used when the work-item processes a 2D tile */
class IGCSimple2DKernel : public IGCSimpleKernel
{
public:
    // Inherited methods overridden:
    void run(const Window &window) override;
};
}
#endif /*__ARM_COMPUTE_IGCSIMPLE2DKERNEL_H__ */
