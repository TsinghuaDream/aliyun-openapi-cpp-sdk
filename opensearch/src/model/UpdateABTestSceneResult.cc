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

#include <alibabacloud/opensearch/model/UpdateABTestSceneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

UpdateABTestSceneResult::UpdateABTestSceneResult() :
	ServiceResult()
{}

UpdateABTestSceneResult::UpdateABTestSceneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateABTestSceneResult::~UpdateABTestSceneResult()
{}

void UpdateABTestSceneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["id"].isNull())
		result_.id = resultNode["id"].asString();
	if(!resultNode["name"].isNull())
		result_.name = resultNode["name"].asString();
	if(!resultNode["params"].isNull())
		result_.params = resultNode["params"].asString();
	if(!resultNode["created"].isNull())
		result_.created = std::stoi(resultNode["created"].asString());
	if(!resultNode["updated"].isNull())
		result_.updated = std::stoi(resultNode["updated"].asString());
	if(!resultNode["online"].isNull())
		result_.online = resultNode["online"].asString() == "true";
	if(!resultNode["traffic"].isNull())
		result_.traffic = std::stoi(resultNode["traffic"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string UpdateABTestSceneResult::getRequestId()const
{
	return requestId_;
}

UpdateABTestSceneResult::Result UpdateABTestSceneResult::getResult()const
{
	return result_;
}

