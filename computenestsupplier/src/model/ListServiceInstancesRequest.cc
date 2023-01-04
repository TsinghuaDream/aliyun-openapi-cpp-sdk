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

#include <alibabacloud/computenestsupplier/model/ListServiceInstancesRequest.h>

using AlibabaCloud::ComputeNestSupplier::Model::ListServiceInstancesRequest;

ListServiceInstancesRequest::ListServiceInstancesRequest()
    : RpcServiceRequest("computenestsupplier", "2021-05-21", "ListServiceInstances") {
  setMethod(HttpRequest::Method::Post);
}

ListServiceInstancesRequest::~ListServiceInstancesRequest() {}

std::string ListServiceInstancesRequest::getRegionId() const {
  return regionId_;
}

void ListServiceInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListServiceInstancesRequest::getNextToken() const {
  return nextToken_;
}

void ListServiceInstancesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListServiceInstancesRequest::Tag> ListServiceInstancesRequest::getTag() const {
  return tag_;
}

void ListServiceInstancesRequest::setTag(const std::vector<ListServiceInstancesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::vector<ListServiceInstancesRequest::Filter> ListServiceInstancesRequest::getFilter() const {
  return filter_;
}

void ListServiceInstancesRequest::setFilter(const std::vector<ListServiceInstancesRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
  auto filterObj = filter.at(dep1);
  std::string filterObjStr = std::string("Filter") + "." + std::to_string(dep1 + 1);
    setParameter(filterObjStr + ".Name", filterObj.name);
  }
}

std::string ListServiceInstancesRequest::getMaxResults() const {
  return maxResults_;
}

void ListServiceInstancesRequest::setMaxResults(const std::string &maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), maxResults);
}

