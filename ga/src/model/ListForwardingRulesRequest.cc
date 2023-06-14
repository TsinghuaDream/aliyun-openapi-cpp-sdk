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

#include <alibabacloud/ga/model/ListForwardingRulesRequest.h>

using AlibabaCloud::Ga::Model::ListForwardingRulesRequest;

ListForwardingRulesRequest::ListForwardingRulesRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListForwardingRules") {
  setMethod(HttpRequest::Method::Post);
}

ListForwardingRulesRequest::~ListForwardingRulesRequest() {}

std::string ListForwardingRulesRequest::getClientToken() const {
  return clientToken_;
}

void ListForwardingRulesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ListForwardingRulesRequest::getListenerId() const {
  return listenerId_;
}

void ListForwardingRulesRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string ListForwardingRulesRequest::getForwardingRuleId() const {
  return forwardingRuleId_;
}

void ListForwardingRulesRequest::setForwardingRuleId(const std::string &forwardingRuleId) {
  forwardingRuleId_ = forwardingRuleId;
  setParameter(std::string("ForwardingRuleId"), forwardingRuleId);
}

std::string ListForwardingRulesRequest::getRegionId() const {
  return regionId_;
}

void ListForwardingRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListForwardingRulesRequest::getNextToken() const {
  return nextToken_;
}

void ListForwardingRulesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListForwardingRulesRequest::getMaxResults() const {
  return maxResults_;
}

void ListForwardingRulesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListForwardingRulesRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void ListForwardingRulesRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

