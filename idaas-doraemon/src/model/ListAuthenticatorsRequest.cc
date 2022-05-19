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

#include <alibabacloud/idaas-doraemon/model/ListAuthenticatorsRequest.h>

using AlibabaCloud::Idaas_doraemon::Model::ListAuthenticatorsRequest;

ListAuthenticatorsRequest::ListAuthenticatorsRequest()
    : RpcServiceRequest("idaas-doraemon", "2021-05-20", "ListAuthenticators") {
  setMethod(HttpRequest::Method::Post);
}

ListAuthenticatorsRequest::~ListAuthenticatorsRequest() {}

std::string ListAuthenticatorsRequest::getUserId() const {
  return userId_;
}

void ListAuthenticatorsRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

long ListAuthenticatorsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAuthenticatorsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListAuthenticatorsRequest::getPageSize() const {
  return pageSize_;
}

void ListAuthenticatorsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAuthenticatorsRequest::getAuthenticatorType() const {
  return authenticatorType_;
}

void ListAuthenticatorsRequest::setAuthenticatorType(const std::string &authenticatorType) {
  authenticatorType_ = authenticatorType;
  setParameter(std::string("AuthenticatorType"), authenticatorType);
}

std::string ListAuthenticatorsRequest::getApplicationExternalId() const {
  return applicationExternalId_;
}

void ListAuthenticatorsRequest::setApplicationExternalId(const std::string &applicationExternalId) {
  applicationExternalId_ = applicationExternalId;
  setParameter(std::string("ApplicationExternalId"), applicationExternalId);
}

