//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2016 by EMGU Corporation. All rights reserved.
//
//----------------------------------------------------------------------------

#pragma once
#ifndef EMGU_PLOT_C_H
#define EMGU_PLOT_C_H

#include "opencv2/core/core_c.h"
#include "opencv2/plot.hpp"

CVAPI(cv::plot::Plot2d*) cvePlot2dCreateFromX(cv::Mat* data);
CVAPI(cv::plot::Plot2d*) cvePlot2dCreateFromXY(cv::Mat* dataX, cv::Mat* dataY);
CVAPI(void) cvePlot2dRender(cv::plot::Plot2d* plot, cv::Mat* result);
CVAPI(void) cvePlot2dRelease(cv::plot::Plot2d** plot);


#endif