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

#include <alibabacloud/quickbi-public/model/QuerySmartqPermissionByCubeIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QuerySmartqPermissionByCubeIdResult::QuerySmartqPermissionByCubeIdResult() :
	ServiceResult()
{}

QuerySmartqPermissionByCubeIdResult::QuerySmartqPermissionByCubeIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySmartqPermissionByCubeIdResult::~QuerySmartqPermissionByCubeIdResult()
{}

void QuerySmartqPermissionByCubeIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["HasPerssion"].isNull())
		result_.hasPerssion = resultNode["HasPerssion"].asString() == "true";
	if(!resultNode["CubeId"].isNull())
		result_.cubeId = resultNode["CubeId"].asString();
	if(!resultNode["CubeName"].isNull())
		result_.cubeName = resultNode["CubeName"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QuerySmartqPermissionByCubeIdResult::getSuccess()const
{
	return success_;
}

QuerySmartqPermissionByCubeIdResult::Result QuerySmartqPermissionByCubeIdResult::getResult()const
{
	return result_;
}

