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

#include <alibabacloud/dataworks-public/model/DsgScenedDeleteSceneRequest.h>

using AlibabaCloud::Dataworks_public::Model::DsgScenedDeleteSceneRequest;

DsgScenedDeleteSceneRequest::DsgScenedDeleteSceneRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DsgScenedDeleteScene") {
  setMethod(HttpRequest::Method::Post);
}

DsgScenedDeleteSceneRequest::~DsgScenedDeleteSceneRequest() {}

std::vector<DsgScenedDeleteSceneRequest::int> DsgScenedDeleteSceneRequest::getIds() const {
  return ids_;
}

void DsgScenedDeleteSceneRequest::setIds(const std::vector<DsgScenedDeleteSceneRequest::int> &ids) {
  ids_ = ids;
  for(int dep1 = 0; dep1 != ids.size(); dep1++) {
    setParameter(std::string("Ids") + "." + std::to_string(dep1 + 1), std::to_string(ids[dep1]));
  }
}

