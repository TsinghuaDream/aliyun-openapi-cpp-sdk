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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_SAVERECORDINGREQUEST_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_SAVERECORDINGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/voicenavigator/VoiceNavigatorExport.h>

namespace AlibabaCloud
{
	namespace VoiceNavigator
	{
		namespace Model
		{
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT SaveRecordingRequest : public RpcServiceRequest
			{

			public:
				SaveRecordingRequest();
				~SaveRecordingRequest();

				std::string getConversationId()const;
				void setConversationId(const std::string& conversationId);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getDuration()const;
				void setDuration(const std::string& duration);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getFileName()const;
				void setFileName(const std::string& fileName);
				std::string getFilePath()const;
				void setFilePath(const std::string& filePath);
				long getInstanceOwnerId()const;
				void setInstanceOwnerId(long instanceOwnerId);

            private:
				std::string conversationId_;
				long startTime_;
				std::string type_;
				std::string duration_;
				std::string instanceId_;
				std::string fileName_;
				std::string filePath_;
				long instanceOwnerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_SAVERECORDINGREQUEST_H_