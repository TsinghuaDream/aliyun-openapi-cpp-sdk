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

#include <alibabacloud/gpdb/model/DescribeDBInstanceOnECSAttributeRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeDBInstanceOnECSAttributeRequest;

DescribeDBInstanceOnECSAttributeRequest::DescribeDBInstanceOnECSAttributeRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeDBInstanceOnECSAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceOnECSAttributeRequest::~DescribeDBInstanceOnECSAttributeRequest() {}

std::string DescribeDBInstanceOnECSAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceOnECSAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstanceOnECSAttributeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstanceOnECSAttributeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

long DescribeDBInstanceOnECSAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstanceOnECSAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

