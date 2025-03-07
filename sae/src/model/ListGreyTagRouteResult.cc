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

#include <alibabacloud/sae/model/ListGreyTagRouteResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

ListGreyTagRouteResult::ListGreyTagRouteResult() :
	ServiceResult()
{}

ListGreyTagRouteResult::ListGreyTagRouteResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGreyTagRouteResult::~ListGreyTagRouteResult()
{}

void ListGreyTagRouteResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stol(dataNode["TotalSize"].asString());
	auto allResultNode = dataNode["Result"]["resultItem"];
	for (auto dataNodeResultresultItem : allResultNode)
	{
		Data::ResultItem resultItemObject;
		if(!dataNodeResultresultItem["Description"].isNull())
			resultItemObject.description = dataNodeResultresultItem["Description"].asString();
		if(!dataNodeResultresultItem["GreyTagRouteId"].isNull())
			resultItemObject.greyTagRouteId = std::stol(dataNodeResultresultItem["GreyTagRouteId"].asString());
		if(!dataNodeResultresultItem["CreateTime"].isNull())
			resultItemObject.createTime = std::stol(dataNodeResultresultItem["CreateTime"].asString());
		if(!dataNodeResultresultItem["UpdateTime"].isNull())
			resultItemObject.updateTime = std::stol(dataNodeResultresultItem["UpdateTime"].asString());
		if(!dataNodeResultresultItem["Name"].isNull())
			resultItemObject.name = dataNodeResultresultItem["Name"].asString();
		auto allScRulesNode = dataNodeResultresultItem["ScRules"]["scRule"];
		for (auto dataNodeResultresultItemScRulesscRule : allScRulesNode)
		{
			Data::ResultItem::ScRule scRulesObject;
			if(!dataNodeResultresultItemScRulesscRule["path"].isNull())
				scRulesObject.path = dataNodeResultresultItemScRulesscRule["path"].asString();
			if(!dataNodeResultresultItemScRulesscRule["condition"].isNull())
				scRulesObject.condition = dataNodeResultresultItemScRulesscRule["condition"].asString();
			auto allitemsNode = dataNodeResultresultItemScRulesscRule["items"]["item"];
			for (auto dataNodeResultresultItemScRulesscRuleitemsitem : allitemsNode)
			{
				Data::ResultItem::ScRule::Item itemsObject;
				if(!dataNodeResultresultItemScRulesscRuleitemsitem["name"].isNull())
					itemsObject.name = dataNodeResultresultItemScRulesscRuleitemsitem["name"].asString();
				if(!dataNodeResultresultItemScRulesscRuleitemsitem["index"].isNull())
					itemsObject.index = std::stoi(dataNodeResultresultItemScRulesscRuleitemsitem["index"].asString());
				if(!dataNodeResultresultItemScRulesscRuleitemsitem["expr"].isNull())
					itemsObject.expr = dataNodeResultresultItemScRulesscRuleitemsitem["expr"].asString();
				if(!dataNodeResultresultItemScRulesscRuleitemsitem["type"].isNull())
					itemsObject.type = dataNodeResultresultItemScRulesscRuleitemsitem["type"].asString();
				if(!dataNodeResultresultItemScRulesscRuleitemsitem["cond"].isNull())
					itemsObject.cond = dataNodeResultresultItemScRulesscRuleitemsitem["cond"].asString();
				if(!dataNodeResultresultItemScRulesscRuleitemsitem["value"].isNull())
					itemsObject.value = dataNodeResultresultItemScRulesscRuleitemsitem["value"].asString();
				if(!dataNodeResultresultItemScRulesscRuleitemsitem["operator"].isNull())
					itemsObject._operator = dataNodeResultresultItemScRulesscRuleitemsitem["operator"].asString();
				scRulesObject.items.push_back(itemsObject);
			}
			resultItemObject.scRules.push_back(scRulesObject);
		}
		auto allDubboRulesNode = dataNodeResultresultItem["DubboRules"]["dubboRule"];
		for (auto dataNodeResultresultItemDubboRulesdubboRule : allDubboRulesNode)
		{
			Data::ResultItem::DubboRule dubboRulesObject;
			if(!dataNodeResultresultItemDubboRulesdubboRule["condition"].isNull())
				dubboRulesObject.condition = dataNodeResultresultItemDubboRulesdubboRule["condition"].asString();
			if(!dataNodeResultresultItemDubboRulesdubboRule["methodName"].isNull())
				dubboRulesObject.methodName = dataNodeResultresultItemDubboRulesdubboRule["methodName"].asString();
			if(!dataNodeResultresultItemDubboRulesdubboRule["serviceName"].isNull())
				dubboRulesObject.serviceName = dataNodeResultresultItemDubboRulesdubboRule["serviceName"].asString();
			if(!dataNodeResultresultItemDubboRulesdubboRule["version"].isNull())
				dubboRulesObject.version = dataNodeResultresultItemDubboRulesdubboRule["version"].asString();
			if(!dataNodeResultresultItemDubboRulesdubboRule["group"].isNull())
				dubboRulesObject.group = dataNodeResultresultItemDubboRulesdubboRule["group"].asString();
			auto allitems1Node = dataNodeResultresultItemDubboRulesdubboRule["items"]["item"];
			for (auto dataNodeResultresultItemDubboRulesdubboRuleitemsitem : allitems1Node)
			{
				Data::ResultItem::DubboRule::Item2 items1Object;
				if(!dataNodeResultresultItemDubboRulesdubboRuleitemsitem["name"].isNull())
					items1Object.name = dataNodeResultresultItemDubboRulesdubboRuleitemsitem["name"].asString();
				if(!dataNodeResultresultItemDubboRulesdubboRuleitemsitem["index"].isNull())
					items1Object.index = std::stoi(dataNodeResultresultItemDubboRulesdubboRuleitemsitem["index"].asString());
				if(!dataNodeResultresultItemDubboRulesdubboRuleitemsitem["expr"].isNull())
					items1Object.expr = dataNodeResultresultItemDubboRulesdubboRuleitemsitem["expr"].asString();
				if(!dataNodeResultresultItemDubboRulesdubboRuleitemsitem["type"].isNull())
					items1Object.type = dataNodeResultresultItemDubboRulesdubboRuleitemsitem["type"].asString();
				if(!dataNodeResultresultItemDubboRulesdubboRuleitemsitem["cond"].isNull())
					items1Object.cond = dataNodeResultresultItemDubboRulesdubboRuleitemsitem["cond"].asString();
				if(!dataNodeResultresultItemDubboRulesdubboRuleitemsitem["value"].isNull())
					items1Object.value = dataNodeResultresultItemDubboRulesdubboRuleitemsitem["value"].asString();
				if(!dataNodeResultresultItemDubboRulesdubboRuleitemsitem["operator"].isNull())
					items1Object._operator = dataNodeResultresultItemDubboRulesdubboRuleitemsitem["operator"].asString();
				dubboRulesObject.items1.push_back(items1Object);
			}
			resultItemObject.dubboRules.push_back(dubboRulesObject);
		}
		data_.result.push_back(resultItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListGreyTagRouteResult::getMessage()const
{
	return message_;
}

std::string ListGreyTagRouteResult::getTraceId()const
{
	return traceId_;
}

ListGreyTagRouteResult::Data ListGreyTagRouteResult::getData()const
{
	return data_;
}

std::string ListGreyTagRouteResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListGreyTagRouteResult::getCode()const
{
	return code_;
}

bool ListGreyTagRouteResult::getSuccess()const
{
	return success_;
}

