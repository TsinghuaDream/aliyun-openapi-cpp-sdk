/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/oceanbasepro/model/DescribeParametersRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeParametersRequest;

DescribeParametersRequest::DescribeParametersRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeParameters") {
  setMethod(HttpRequest::Method::Post);
}

DescribeParametersRequest::~DescribeParametersRequest() {}

std::string DescribeParametersRequest::getDimensionValue() const {
  return dimensionValue_;
}

void DescribeParametersRequest::setDimensionValue(const std::string &dimensionValue) {
  dimensionValue_ = dimensionValue;
  setBodyParameter(std::string("DimensionValue"), dimensionValue);
}

std::string DescribeParametersRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeParametersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeParametersRequest::getDimension() const {
  return dimension_;
}

void DescribeParametersRequest::setDimension(const std::string &dimension) {
  dimension_ = dimension;
  setBodyParameter(std::string("Dimension"), dimension);
}

