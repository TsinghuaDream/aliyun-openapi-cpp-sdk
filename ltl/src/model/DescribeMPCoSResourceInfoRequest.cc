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

#include <alibabacloud/ltl/model/DescribeMPCoSResourceInfoRequest.h>

using AlibabaCloud::Ltl::Model::DescribeMPCoSResourceInfoRequest;

DescribeMPCoSResourceInfoRequest::DescribeMPCoSResourceInfoRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "DescribeMPCoSResourceInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMPCoSResourceInfoRequest::~DescribeMPCoSResourceInfoRequest() {}

std::string DescribeMPCoSResourceInfoRequest::getApiVersion() const {
  return apiVersion_;
}

void DescribeMPCoSResourceInfoRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string DescribeMPCoSResourceInfoRequest::getBizChainId() const {
  return bizChainId_;
}

void DescribeMPCoSResourceInfoRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

