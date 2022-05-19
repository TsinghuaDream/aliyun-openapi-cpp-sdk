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

#include <alibabacloud/idaas-doraemon/model/ListUsersRequest.h>

using AlibabaCloud::Idaas_doraemon::Model::ListUsersRequest;

ListUsersRequest::ListUsersRequest()
    : RpcServiceRequest("idaas-doraemon", "2021-05-20", "ListUsers") {
  setMethod(HttpRequest::Method::Post);
}

ListUsersRequest::~ListUsersRequest() {}

std::string ListUsersRequest::getUserId() const {
  return userId_;
}

void ListUsersRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string ListUsersRequest::getApplicationExternalId() const {
  return applicationExternalId_;
}

void ListUsersRequest::setApplicationExternalId(const std::string &applicationExternalId) {
  applicationExternalId_ = applicationExternalId;
  setParameter(std::string("ApplicationExternalId"), applicationExternalId);
}

