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

#include <alibabacloud/ltl/model/ListMultiPartyCollaborationChainRequest.h>

using AlibabaCloud::Ltl::Model::ListMultiPartyCollaborationChainRequest;

ListMultiPartyCollaborationChainRequest::ListMultiPartyCollaborationChainRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "ListMultiPartyCollaborationChain") {
  setMethod(HttpRequest::Method::Post);
}

ListMultiPartyCollaborationChainRequest::~ListMultiPartyCollaborationChainRequest() {}

int ListMultiPartyCollaborationChainRequest::getSize() const {
  return size_;
}

void ListMultiPartyCollaborationChainRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

int ListMultiPartyCollaborationChainRequest::getNum() const {
  return num_;
}

void ListMultiPartyCollaborationChainRequest::setNum(int num) {
  num_ = num;
  setParameter(std::string("Num"), std::to_string(num));
}

std::string ListMultiPartyCollaborationChainRequest::getName() const {
  return name_;
}

void ListMultiPartyCollaborationChainRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListMultiPartyCollaborationChainRequest::getApiVersion() const {
  return apiVersion_;
}

void ListMultiPartyCollaborationChainRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

