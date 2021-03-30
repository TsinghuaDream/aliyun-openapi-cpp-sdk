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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTUSERPERMISSIONSRESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTUSERPERMISSIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>

namespace AlibabaCloud
{
	namespace Dms_enterprise
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ListUserPermissionsResult : public ServiceResult
			{
			public:
				struct UserPermission
				{
					struct PermDetail
					{
						std::string expireDate;
						std::string permType;
						std::string extraData;
						std::string createDate;
						std::string originFrom;
						std::string userAccessId;
					};
					std::string tableId;
					std::string searchName;
					std::string instanceId;
					std::vector<UserPermission::PermDetail> permDetails;
					std::string dbType;
					std::string envType;
					std::string dsType;
					std::string columnName;
					std::string tableName;
					std::string userNickName;
					std::string alias;
					std::string userId;
					std::string dbId;
					bool logic;
					std::string schemaName;
				};


				ListUserPermissionsResult();
				explicit ListUserPermissionsResult(const std::string &payload);
				~ListUserPermissionsResult();
				long getTotalCount()const;
				std::string getErrorCode()const;
				std::vector<UserPermission> getUserPermissions()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string errorCode_;
				std::vector<UserPermission> userPermissions_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTUSERPERMISSIONSRESULT_H_