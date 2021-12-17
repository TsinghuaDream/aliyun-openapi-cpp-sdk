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

#ifndef ALIBABACLOUD_NAS_MODEL_CREATEDATAFLOWTASKREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_CREATEDATAFLOWTASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/nas/NASExport.h>

namespace AlibabaCloud
{
	namespace NAS
	{
		namespace Model
		{
			class ALIBABACLOUD_NAS_EXPORT CreateDataFlowTaskRequest : public RpcServiceRequest
			{

			public:
				CreateDataFlowTaskRequest();
				~CreateDataFlowTaskRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getDirectory()const;
				void setDirectory(const std::string& directory);
				std::string getSrcTaskId()const;
				void setSrcTaskId(const std::string& srcTaskId);
				std::string getDataType()const;
				void setDataType(const std::string& dataType);
				std::string getFileSystemId()const;
				void setFileSystemId(const std::string& fileSystemId);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getDataFlowId()const;
				void setDataFlowId(const std::string& dataFlowId);
				std::string getEntryList()const;
				void setEntryList(const std::string& entryList);
				std::string getTaskAction()const;
				void setTaskAction(const std::string& taskAction);

            private:
				std::string clientToken_;
				std::string directory_;
				std::string srcTaskId_;
				std::string dataType_;
				std::string fileSystemId_;
				bool dryRun_;
				std::string dataFlowId_;
				std::string entryList_;
				std::string taskAction_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NAS_MODEL_CREATEDATAFLOWTASKREQUEST_H_