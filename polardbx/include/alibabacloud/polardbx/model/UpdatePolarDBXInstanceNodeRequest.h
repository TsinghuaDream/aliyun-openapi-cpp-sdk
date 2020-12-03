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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_UPDATEPOLARDBXINSTANCENODEREQUEST_H_
#define ALIBABACLOUD_POLARDBX_MODEL_UPDATEPOLARDBXINSTANCENODEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/polardbx/PolardbxExport.h>

namespace AlibabaCloud
{
	namespace Polardbx
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDBX_EXPORT UpdatePolarDBXInstanceNodeRequest : public RpcServiceRequest
			{

			public:
				UpdatePolarDBXInstanceNodeRequest();
				~UpdatePolarDBXInstanceNodeRequest();

				std::string getDBInstanceName()const;
				void setDBInstanceName(const std::string& dBInstanceName);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDbInstanceNodeCount()const;
				void setDbInstanceNodeCount(const std::string& dbInstanceNodeCount);

            private:
				std::string dBInstanceName_;
				std::string clientToken_;
				std::string regionId_;
				std::string dbInstanceNodeCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDBX_MODEL_UPDATEPOLARDBXINSTANCENODEREQUEST_H_