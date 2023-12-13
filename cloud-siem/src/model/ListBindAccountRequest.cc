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

#include <alibabacloud/cloud-siem/model/ListBindAccountRequest.h>

using AlibabaCloud::Cloud_siem::Model::ListBindAccountRequest;

ListBindAccountRequest::ListBindAccountRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "ListBindAccount") {
  setMethod(HttpRequest::Method::Post);
}

ListBindAccountRequest::~ListBindAccountRequest() {}

std::string ListBindAccountRequest::getCloudCode() const {
  return cloudCode_;
}

void ListBindAccountRequest::setCloudCode(const std::string &cloudCode) {
  cloudCode_ = cloudCode;
  setBodyParameter(std::string("CloudCode"), cloudCode);
}

std::string ListBindAccountRequest::getRegionId() const {
  return regionId_;
}

void ListBindAccountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

