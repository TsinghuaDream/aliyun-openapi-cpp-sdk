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

#include <alibabacloud/elasticsearch/model/DeleteComponentIndexRequest.h>

using AlibabaCloud::Elasticsearch::Model::DeleteComponentIndexRequest;

DeleteComponentIndexRequest::DeleteComponentIndexRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/component-index/[name]"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteComponentIndexRequest::~DeleteComponentIndexRequest() {}

std::string DeleteComponentIndexRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteComponentIndexRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteComponentIndexRequest::getName() const {
  return name_;
}

void DeleteComponentIndexRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("name"), name);
}

