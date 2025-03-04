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

#include <alibabacloud/config/model/GetDiscoveredResourceCountsGroupByResourceTypeRequest.h>

using AlibabaCloud::Config::Model::GetDiscoveredResourceCountsGroupByResourceTypeRequest;

GetDiscoveredResourceCountsGroupByResourceTypeRequest::GetDiscoveredResourceCountsGroupByResourceTypeRequest()
    : RpcServiceRequest("config", "2020-09-07", "GetDiscoveredResourceCountsGroupByResourceType") {
  setMethod(HttpRequest::Method::Get);
}

GetDiscoveredResourceCountsGroupByResourceTypeRequest::~GetDiscoveredResourceCountsGroupByResourceTypeRequest() {}

std::string GetDiscoveredResourceCountsGroupByResourceTypeRequest::getRegion() const {
  return region_;
}

void GetDiscoveredResourceCountsGroupByResourceTypeRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

