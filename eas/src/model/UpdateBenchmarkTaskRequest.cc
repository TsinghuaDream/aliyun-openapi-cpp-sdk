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

#include <alibabacloud/eas/model/UpdateBenchmarkTaskRequest.h>

using AlibabaCloud::Eas::Model::UpdateBenchmarkTaskRequest;

UpdateBenchmarkTaskRequest::UpdateBenchmarkTaskRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/benchmark-tasks/[ClusterId]/[TaskName]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateBenchmarkTaskRequest::~UpdateBenchmarkTaskRequest() {}

string UpdateBenchmarkTaskRequest::getTaskName() const {
  return taskName_;
}

void UpdateBenchmarkTaskRequest::setTaskName(string taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), std::to_string(taskName));
}

string UpdateBenchmarkTaskRequest::getClusterId() const {
  return clusterId_;
}

void UpdateBenchmarkTaskRequest::setClusterId(string clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), std::to_string(clusterId));
}

string UpdateBenchmarkTaskRequest::getBody() const {
  return body_;
}

void UpdateBenchmarkTaskRequest::setBody(string body) {
  body_ = body;
  setBodyParameter(std::string("body"), std::to_string(body));
}

