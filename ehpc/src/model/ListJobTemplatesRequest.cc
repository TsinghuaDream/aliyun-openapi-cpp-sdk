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

#include <alibabacloud/ehpc/model/ListJobTemplatesRequest.h>

using AlibabaCloud::EHPC::Model::ListJobTemplatesRequest;

ListJobTemplatesRequest::ListJobTemplatesRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "ListJobTemplates") {
  setMethod(HttpRequest::Method::Get);
}

ListJobTemplatesRequest::~ListJobTemplatesRequest() {}

int ListJobTemplatesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListJobTemplatesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListJobTemplatesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListJobTemplatesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListJobTemplatesRequest::getName() const {
  return name_;
}

void ListJobTemplatesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ListJobTemplatesRequest::getPageSize() const {
  return pageSize_;
}

void ListJobTemplatesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

