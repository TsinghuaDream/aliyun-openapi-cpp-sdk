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

#include <alibabacloud/dms-enterprise/model/GetDataCorrectOrderDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetDataCorrectOrderDetailResult::GetDataCorrectOrderDetailResult() :
	ServiceResult()
{}

GetDataCorrectOrderDetailResult::GetDataCorrectOrderDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataCorrectOrderDetailResult::~GetDataCorrectOrderDetailResult()
{}

void GetDataCorrectOrderDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataCorrectOrderDetailNode = value["DataCorrectOrderDetail"];
	if(!dataCorrectOrderDetailNode["Status"].isNull())
		dataCorrectOrderDetail_.status = dataCorrectOrderDetailNode["Status"].asString();
	if(!dataCorrectOrderDetailNode["ExecMode"].isNull())
		dataCorrectOrderDetail_.execMode = dataCorrectOrderDetailNode["ExecMode"].asString();
	auto allPreCheckDetailNode = dataCorrectOrderDetailNode["PreCheckDetail"]["TaskCheckDO"];
	for (auto dataCorrectOrderDetailNodePreCheckDetailTaskCheckDO : allPreCheckDetailNode)
	{
		DataCorrectOrderDetail::TaskCheckDO taskCheckDOObject;
		if(!dataCorrectOrderDetailNodePreCheckDetailTaskCheckDO["UserTip"].isNull())
			taskCheckDOObject.userTip = dataCorrectOrderDetailNodePreCheckDetailTaskCheckDO["UserTip"].asString();
		if(!dataCorrectOrderDetailNodePreCheckDetailTaskCheckDO["CheckStatus"].isNull())
			taskCheckDOObject.checkStatus = dataCorrectOrderDetailNodePreCheckDetailTaskCheckDO["CheckStatus"].asString();
		if(!dataCorrectOrderDetailNodePreCheckDetailTaskCheckDO["CheckStep"].isNull())
			taskCheckDOObject.checkStep = dataCorrectOrderDetailNodePreCheckDetailTaskCheckDO["CheckStep"].asString();
		dataCorrectOrderDetail_.preCheckDetail.push_back(taskCheckDOObject);
	}
	auto allDatabaseListNode = dataCorrectOrderDetailNode["DatabaseList"]["Database"];
	for (auto dataCorrectOrderDetailNodeDatabaseListDatabase : allDatabaseListNode)
	{
		DataCorrectOrderDetail::Database databaseObject;
		if(!dataCorrectOrderDetailNodeDatabaseListDatabase["DbId"].isNull())
			databaseObject.dbId = std::stoi(dataCorrectOrderDetailNodeDatabaseListDatabase["DbId"].asString());
		if(!dataCorrectOrderDetailNodeDatabaseListDatabase["DbType"].isNull())
			databaseObject.dbType = dataCorrectOrderDetailNodeDatabaseListDatabase["DbType"].asString();
		if(!dataCorrectOrderDetailNodeDatabaseListDatabase["Logic"].isNull())
			databaseObject.logic = dataCorrectOrderDetailNodeDatabaseListDatabase["Logic"].asString() == "true";
		if(!dataCorrectOrderDetailNodeDatabaseListDatabase["SearchName"].isNull())
			databaseObject.searchName = dataCorrectOrderDetailNodeDatabaseListDatabase["SearchName"].asString();
		if(!dataCorrectOrderDetailNodeDatabaseListDatabase["EnvType"].isNull())
			databaseObject.envType = dataCorrectOrderDetailNodeDatabaseListDatabase["EnvType"].asString();
		dataCorrectOrderDetail_.databaseList.push_back(databaseObject);
	}
	auto orderDetailNode = dataCorrectOrderDetailNode["OrderDetail"];
	if(!orderDetailNode["RbSQL"].isNull())
		dataCorrectOrderDetail_.orderDetail.rbSQL = orderDetailNode["RbSQL"].asString();
	if(!orderDetailNode["RbAttachmentName"].isNull())
		dataCorrectOrderDetail_.orderDetail.rbAttachmentName = orderDetailNode["RbAttachmentName"].asString();
	if(!orderDetailNode["Classify"].isNull())
		dataCorrectOrderDetail_.orderDetail.classify = orderDetailNode["Classify"].asString();
	if(!orderDetailNode["ExeSQL"].isNull())
		dataCorrectOrderDetail_.orderDetail.exeSQL = orderDetailNode["ExeSQL"].asString();
	if(!orderDetailNode["EstimateAffectRows"].isNull())
		dataCorrectOrderDetail_.orderDetail.estimateAffectRows = std::stol(orderDetailNode["EstimateAffectRows"].asString());
	if(!orderDetailNode["RbSQLType"].isNull())
		dataCorrectOrderDetail_.orderDetail.rbSQLType = orderDetailNode["RbSQLType"].asString();
	if(!orderDetailNode["ActualAffectRows"].isNull())
		dataCorrectOrderDetail_.orderDetail.actualAffectRows = std::stol(orderDetailNode["ActualAffectRows"].asString());
	if(!orderDetailNode["IgnoreAffectRows"].isNull())
		dataCorrectOrderDetail_.orderDetail.ignoreAffectRows = orderDetailNode["IgnoreAffectRows"].asString() == "true";
	if(!orderDetailNode["AttachmentName"].isNull())
		dataCorrectOrderDetail_.orderDetail.attachmentName = orderDetailNode["AttachmentName"].asString();
	if(!orderDetailNode["SqlType"].isNull())
		dataCorrectOrderDetail_.orderDetail.sqlType = orderDetailNode["SqlType"].asString();
	if(!orderDetailNode["IgnoreAffectRowsReason"].isNull())
		dataCorrectOrderDetail_.orderDetail.ignoreAffectRowsReason = orderDetailNode["IgnoreAffectRowsReason"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetDataCorrectOrderDetailResult::DataCorrectOrderDetail GetDataCorrectOrderDetailResult::getDataCorrectOrderDetail()const
{
	return dataCorrectOrderDetail_;
}

std::string GetDataCorrectOrderDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDataCorrectOrderDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDataCorrectOrderDetailResult::getSuccess()const
{
	return success_;
}

