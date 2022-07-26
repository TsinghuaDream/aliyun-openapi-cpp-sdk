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

#include <alibabacloud/oos/model/GetParametersByPathRequest.h>

using AlibabaCloud::Oos::Model::GetParametersByPathRequest;

GetParametersByPathRequest::GetParametersByPathRequest()
    : RpcServiceRequest("oos", "2019-06-01", "GetParametersByPath") {
  setMethod(HttpRequest::Method::Post);
}

GetParametersByPathRequest::~GetParametersByPathRequest() {}

bool GetParametersByPathRequest::getRecursive() const {
  return recursive_;
}

void GetParametersByPathRequest::setRecursive(bool recursive) {
  recursive_ = recursive;
  setParameter(std::string("Recursive"), recursive ? "true" : "false");
}

std::string GetParametersByPathRequest::getPath() const {
  return path_;
}

void GetParametersByPathRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string GetParametersByPathRequest::getRegionId() const {
  return regionId_;
}

void GetParametersByPathRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetParametersByPathRequest::getNextToken() const {
  return nextToken_;
}

void GetParametersByPathRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int GetParametersByPathRequest::getMaxResults() const {
  return maxResults_;
}

void GetParametersByPathRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

