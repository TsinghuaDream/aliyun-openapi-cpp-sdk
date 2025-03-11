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

#include <alibabacloud/drds/model/DescribeInstanceAccountsRequest.h>

using AlibabaCloud::Drds::Model::DescribeInstanceAccountsRequest;

DescribeInstanceAccountsRequest::DescribeInstanceAccountsRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeInstanceAccounts") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceAccountsRequest::~DescribeInstanceAccountsRequest() {}

std::string DescribeInstanceAccountsRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeInstanceAccountsRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string DescribeInstanceAccountsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeInstanceAccountsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

