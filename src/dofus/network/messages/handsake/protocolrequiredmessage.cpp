//
// protocolrequiredmessage.cpp
// CawotteSrv
//
// Created by Luax on 7/3/15.
// Copyright (c) 2015 Luax. All rights reserved.
//

#include "protocolrequiredmessage.h"

void ProtocolRequiredMessage::initProtocolRequiredMessage(unsigned int _requiredVersion, unsigned int _currentVersion)
{
    requiredVersion = _requiredVersion;
    currentVersion = _currentVersion;
}

unsigned short ProtocolRequiredMessage::getId()
{
    return id;
}

std::string ProtocolRequiredMessage::getName()
{
    return "ProtocolRequired";
}

void ProtocolRequiredMessage::serialize(BinaryWriter& writer)
{
    writer.writeUInt(requiredVersion);
    writer.writeUInt(currentVersion);
}

void ProtocolRequiredMessage::deserialize(BinaryReader& reader)
{
    requiredVersion = reader.readUInt();
    currentVersion = reader.readUInt();
}
