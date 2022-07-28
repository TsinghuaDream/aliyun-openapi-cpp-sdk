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

#include <alibabacloud/eas/model/ListResourcesRequest.h>

using AlibabaCloud::Eas::Model::ListResourcesRequest;

ListResourcesRequest::ListResourcesRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/resources"};
  setMethod(HttpRequest::Method::Get);
}

ListResourcesRequest::~ListResourcesRequest() {}

integer ListResourcesRequest::getPageSize() const {
  return pageSize_;
}

void ListResourcesRequest::setPageSize(integer pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

integer ListResourcesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListResourcesRequest::setPageNumber(integer pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

