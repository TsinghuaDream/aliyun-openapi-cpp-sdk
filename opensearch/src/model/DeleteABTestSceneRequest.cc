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

#include <alibabacloud/opensearch/model/DeleteABTestSceneRequest.h>

using AlibabaCloud::OpenSearch::Model::DeleteABTestSceneRequest;

DeleteABTestSceneRequest::DeleteABTestSceneRequest() :
	RoaServiceRequest("opensearch", "2017-12-25")
{
	setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/scenes/[sceneId]");
	setMethod(HttpRequest::Method::Delete);
}

DeleteABTestSceneRequest::~DeleteABTestSceneRequest()
{}

int DeleteABTestSceneRequest::getSceneId()const
{
	return sceneId_;
}

void DeleteABTestSceneRequest::setSceneId(int sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", std::to_string(sceneId));
}

std::string DeleteABTestSceneRequest::getAppGroupIdentity()const
{
	return appGroupIdentity_;
}

void DeleteABTestSceneRequest::setAppGroupIdentity(const std::string& appGroupIdentity)
{
	appGroupIdentity_ = appGroupIdentity;
	setParameter("AppGroupIdentity", appGroupIdentity);
}

