void DecodeIRMessage(int Msg)
{
  if (Msg < 500)
  {
    //Valid Msg from Other Arduino Received
    int Temp;
    MsgForDevice = Msg / 100;
    Temp = Msg % 100;
    SongNoToPlay = Temp / 10;
    Temp = Temp % 10;
    PartNoToPlay = Temp;
  }
}

void SendIRMessage(int DeviceID, int SongNo, int PartNo)
{
  int Msg = DeviceID*100  + SongNo*10 + PartNo;
  IRsend irsend;
  irsend.sendSony (Msg, 12);
  Serial.println("Sent");
}

void IsMsgFromRemote(int Msg)

void InformWhatToPlay2(int devID1, int devID2, int SongNo)
{
  SendIRMessage(devID1, SongNo, 2);
  SendIRMessage(devID2, SongNo, 3);
}

void InformWhatToPlay3(int devID1, int devID2, int devID3, int SongNo)
{
  SendIRMessage(devID1, SongNo, 1);
  SendIRMessage(devID2, SongNo, 2);
  SendIRMessage(devID3, SongNo, 3);
}
