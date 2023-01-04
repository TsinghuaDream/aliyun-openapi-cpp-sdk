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

#ifndef ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_GETSERVICEINSTANCERESULT_H_
#define ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_GETSERVICEINSTANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/computenestsupplier/ComputeNestSupplierExport.h>

namespace AlibabaCloud
{
	namespace ComputeNestSupplier
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPUTENESTSUPPLIER_EXPORT GetServiceInstanceResult : public ServiceResult
			{
			public:
				struct Service
				{
					struct ServiceInfo
					{
						std::string locale;
						std::string image;
						std::string name;
						std::string shortDescription;
					};
					std::string status;
					std::string deployType;
					std::string serviceId;
					std::string deployMetadata;
					std::string version;
					std::string supplierName;
					std::string serviceType;
					std::vector<ServiceInfo> serviceInfos;
					std::string publishTime;
					std::string versionName;
					std::string serviceProductUrl;
					std::string supplierUrl;
					std::string serviceDocUrl;
				};
				struct NetworkConfig
				{
					struct PrivateVpcConnection
					{
						std::string endpointServiceId;
						std::string endpointId;
					};
					struct ReversePrivateVpcConnection
					{
						std::string endpointServiceId;
						std::string endpointId;
					};
					std::string endpointServiceId;
					std::vector<ReversePrivateVpcConnection> reversePrivateVpcConnections;
					std::string endpointId;
					std::vector<PrivateVpcConnection> privateVpcConnections;
				};
				struct Tag
				{
					std::string value;
					std::string key;
				};


				GetServiceInstanceResult();
				explicit GetServiceInstanceResult(const std::string &payload);
				~GetServiceInstanceResult();
				std::string getOperatedServiceInstanceId()const;
				std::string getEndTime()const;
				std::string getOperationEndTime()const;
				bool getEnableInstanceOps()const;
				std::string getSource()const;
				std::string getName()const;
				std::string getOperationStartTime()const;
				std::string getServiceInstanceId()const;
				std::string getServiceType()const;
				std::string getLicenseMetadata()const;
				std::string getTemplateName()const;
				std::vector<Tag> getTags()const;
				std::string getStatus()const;
				long getProgress()const;
				std::string getParameters()const;
				std::string getCreateTime()const;
				NetworkConfig getNetworkConfig()const;
				Service getService()const;
				std::string getPayType()const;
				long getUserId()const;
				std::string getStatusDetail()const;
				std::string getUpdateTime()const;
				std::string getOutputs()const;
				long getSupplierUid()const;
				bool getIsOperated()const;
				std::string getResources()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string operatedServiceInstanceId_;
				std::string endTime_;
				std::string operationEndTime_;
				bool enableInstanceOps_;
				std::string source_;
				std::string name_;
				std::string operationStartTime_;
				std::string serviceInstanceId_;
				std::string serviceType_;
				std::string licenseMetadata_;
				std::string templateName_;
				std::vector<Tag> tags_;
				std::string status_;
				long progress_;
				std::string parameters_;
				std::string createTime_;
				NetworkConfig networkConfig_;
				Service service_;
				std::string payType_;
				long userId_;
				std::string statusDetail_;
				std::string updateTime_;
				std::string outputs_;
				long supplierUid_;
				bool isOperated_;
				std::string resources_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_GETSERVICEINSTANCERESULT_H_