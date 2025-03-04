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

#include <alibabacloud/rds/model/ModifyDBInstanceSSLRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceSSLRequest;

ModifyDBInstanceSSLRequest::ModifyDBInstanceSSLRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceSSL")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceSSLRequest::~ModifyDBInstanceSSLRequest()
{}

long ModifyDBInstanceSSLRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstanceSSLRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceSSLRequest::getConnectionString()const
{
	return connectionString_;
}

void ModifyDBInstanceSSLRequest::setConnectionString(const std::string& connectionString)
{
	connectionString_ = connectionString;
	setParameter("ConnectionString", connectionString);
}

std::string ModifyDBInstanceSSLRequest::getServerKey()const
{
	return serverKey_;
}

void ModifyDBInstanceSSLRequest::setServerKey(const std::string& serverKey)
{
	serverKey_ = serverKey;
	setParameter("ServerKey", serverKey);
}

int ModifyDBInstanceSSLRequest::getClientCrlEnabled()const
{
	return clientCrlEnabled_;
}

void ModifyDBInstanceSSLRequest::setClientCrlEnabled(int clientCrlEnabled)
{
	clientCrlEnabled_ = clientCrlEnabled;
	setParameter("ClientCrlEnabled", std::to_string(clientCrlEnabled));
}

std::string ModifyDBInstanceSSLRequest::getACL()const
{
	return aCL_;
}

void ModifyDBInstanceSSLRequest::setACL(const std::string& aCL)
{
	aCL_ = aCL;
	setParameter("ACL", aCL);
}

std::string ModifyDBInstanceSSLRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceSSLRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBInstanceSSLRequest::getClientCertRevocationList()const
{
	return clientCertRevocationList_;
}

void ModifyDBInstanceSSLRequest::setClientCertRevocationList(const std::string& clientCertRevocationList)
{
	clientCertRevocationList_ = clientCertRevocationList;
	setParameter("ClientCertRevocationList", clientCertRevocationList);
}

std::string ModifyDBInstanceSSLRequest::getServerCert()const
{
	return serverCert_;
}

void ModifyDBInstanceSSLRequest::setServerCert(const std::string& serverCert)
{
	serverCert_ = serverCert;
	setParameter("ServerCert", serverCert);
}

std::string ModifyDBInstanceSSLRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceSSLRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

int ModifyDBInstanceSSLRequest::getClientCAEnabled()const
{
	return clientCAEnabled_;
}

void ModifyDBInstanceSSLRequest::setClientCAEnabled(int clientCAEnabled)
{
	clientCAEnabled_ = clientCAEnabled;
	setParameter("ClientCAEnabled", std::to_string(clientCAEnabled));
}

std::string ModifyDBInstanceSSLRequest::getClientCACert()const
{
	return clientCACert_;
}

void ModifyDBInstanceSSLRequest::setClientCACert(const std::string& clientCACert)
{
	clientCACert_ = clientCACert;
	setParameter("ClientCACert", clientCACert);
}

std::string ModifyDBInstanceSSLRequest::getReplicationACL()const
{
	return replicationACL_;
}

void ModifyDBInstanceSSLRequest::setReplicationACL(const std::string& replicationACL)
{
	replicationACL_ = replicationACL;
	setParameter("ReplicationACL", replicationACL);
}

std::string ModifyDBInstanceSSLRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstanceSSLRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBInstanceSSLRequest::getCAType()const
{
	return cAType_;
}

void ModifyDBInstanceSSLRequest::setCAType(const std::string& cAType)
{
	cAType_ = cAType;
	setParameter("CAType", cAType);
}

std::string ModifyDBInstanceSSLRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstanceSSLRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyDBInstanceSSLRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceSSLRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int ModifyDBInstanceSSLRequest::getSSLEnabled()const
{
	return sSLEnabled_;
}

void ModifyDBInstanceSSLRequest::setSSLEnabled(int sSLEnabled)
{
	sSLEnabled_ = sSLEnabled;
	setParameter("SSLEnabled", std::to_string(sSLEnabled));
}

