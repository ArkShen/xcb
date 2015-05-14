/**
 * ��Ȩ����(C)2014-2018, �����ɴ���Ϣ�������޹�˾
 * �ļ����ƣ�SECL2ApiDataType.h
 * �ļ�˵��������ӿ�������������͵�ͷ�ļ�
 * ��ǰ�汾��1.0.2
 * ���ߣ�Datafeed��Ŀ��
 * �������ڣ�2015��04��29��
 */             
#if !defined(AFX_HYQUOTE_H__INCLUDED_)
#define AFX_HYQUOTE_H__INCLUDED_


#ifdef WIN32
	typedef unsigned __int64    uint64;	
	typedef __int64             int64;
#else
	typedef unsigned long       uint64;	
	typedef long                int64;
#endif
	typedef unsigned int        uint32;
	typedef unsigned short      uint16;
	typedef unsigned char       uint8;
	typedef int                 int32;
	typedef short               int16;
	typedef char                int8;

#pragma pack(1)

struct SHFAST30_Prices_t{
    // ������
    // PriceLevelOperator  PriceOps;
    // �۸�
    float  Price;
    // ��������ϲ���ʵ�ʵ���ί����
    uint64  OrderQty;
    // ��������ϲ���ʵ�ʵ���ί�б���
    uint32  NumOrders;
};

// �г�����
struct SHFAST30_UA3202_t
{
    // UA3202
    int8 MessageType[8];
    // ���¶���ʱ��(��)
    uint32 DataTimeStamp;	
    // 1-�ظ����� 2-δ��Ȩ
    //uint32 DataStatus;	
    // ֤ȯ����
    int8 SecurityID[9];	
    // �������� 1-ȫ�� 2-����
    //uint32 imageStatus;
	
    // �����̼�
    float PreClosePx;	
    // ���̼�
    float OpenPx;
    // ��߼�
    float HighPx;
    // ��ͼ�
    float LowPx;
    // �ּ�
    float LastPx;	
    // �������̼�
    float ClosePx;
	
    // ��ǰƷ�ֽ���״̬
    int8 InstrumentStatus[8];
	
    // �ɽ�����
    uint32 NumTrades;
    // �ɽ�����
    uint64 TotalVolumeTrade;
    // �ɽ��ܽ��
    double TotalValueTrade;
	
    // ί����������
    uint64 TotalBidQty;
    // ��Ȩƽ��ί��۸�
    float WeightedAvgBidPx;
    // ծȯ��Ȩƽ��ί��۸�
    float AltWeightedAvgBidPx;
    // ί����������
    uint64 TotalOfferQty;
    // ��Ȩƽ��ί���۸�
    float WeightedAvgOfferPx;
    // ծȯ��Ȩƽ��ί���۸�
    float AltWeightedAvgOfferPx;
	
    // ETF��ֵ��ֵ
    uint32 IOPV;
    // ETF�깺����
    uint32 ETFBuyNumber;
    // ETF�깺����
    uint64 ETFBuyAmount;
    // ETF�깺���
    double ETFBuyMoney;
    // ETF��ر���
    uint32 ETFSellNumber;
    // ETF�������
    uint64 ETFSellAmount;
    // ETF��ؽ��
    double ETFSellMoney;
	
    // ծȯ����������
    float YieldToMaturity;
    // Ȩִ֤��������
    uint64 TotalWarrantExecQty;
    // Ȩ֤��ͣ�۸�
    double WarLowerPx;
    // Ȩ֤��ͣ�۸�
    double WarUpperPx;
	
    // ���볷������
    uint32 WithdrawBuyNumber;
    // ���볷������
    uint64 WithdrawBuyAmount;
    // ���볷�����
    double WithdrawBuyMoney;
    // ������������
    uint32 WithdrawSellNumber;
    // ������������
    uint64 WithdrawSellAmount;
    // �����������
    double WithdrawSellMoney;
    // �����ܱ���
    uint32 TotalBidNumber;
    // �����ܱ���
    uint32 TotalOfferNumber;
    // ����ί�гɽ����ȴ�ʱ��
    uint32 BidTradeMaxDuration;
    // ����ί�гɽ����ȴ�ʱ��
    uint32 OfferTradeMaxDuration;
    // ��ί�м�λ��
    uint32 NumBidOrders;
    // ����ί�м�λ��
    uint32 NumOfferOrders;

    // ί��۸����
    uint32 NoBidLevel;
    // ί��۸�����
    SHFAST30_Prices_t arrBidPriceLevels[10];

    // ί���۸����
    uint32 NoOfferLevel;
    // ί���۸�����
    SHFAST30_Prices_t arrOfferPriceLevels[10];
};

// ��ʳɽ�
struct SHFAST30_UA3201_t
{
    // UA3201
    int8 MessageType[8];
    // 1-�ظ����� 2-δ��Ȩ
    //uint32 DataStatus;
    // �ɽ����
    uint32 TradeIndex;
    // �ɽ�ͨ��
    uint32 TradeChannel;
    // ֤ȯ����
    int8 SecurityID[9];
    // �ɽ�ʱ��(�ٷ�֮һ��)
    uint32 TradeTime;
    // �ɽ��۸�
    float TradePrice;
    // �ɽ�����
    uint64 TradeQty;
    // �ɽ����
    double TradeMoney;
    // �򷽶�����
    uint64 TradeBuyNo;
    // ����������
    uint64 TradeSellNo;
    // �����̱�־: B-������ S-������ N-δ֪
    int8 TradeBSFlag[8];
};

// ָ������
struct SHFAST30_UA3113_t
{
    // UA3113
    int8 MessageType [8];
    // ����ʱ��(��)
    uint32 DataTimestamp;
    // 1-�ظ����� 2-δ��Ȩ
    //uint32 DataStatus;
    // ֤ȯ����
    int8 SecurityID[9];
    // ǰ����ָ��
    double PreCloseIndex;
    // ������ָ��
    double OpenIndex;
    // ���������Ӧָ���ĳɽ����
    double Turnover;
    // ���ָ��
    double HighIndex;
    // ���ָ��
    double LowIndex;
    // ����ָ��
    double LastIndex;
    // �ɽ�ʱ��
    uint32 TradeTime;
    // ���������Ӧָ���Ľ�������
    uint64 TotalVolumeTraded;
    // ��������ָ��
    double CloseIndex;
};

// �г�����
struct SHFAST30_UA3115_t
{
    // UA3115
    int8 MessageType [8];
    // ����ʱ��(��)
    uint32 DataTimestamp;
    // 1-�ظ����� 2-δ��Ȩ
    //uint32 DataStatus;
    // ֤ȯ����
    int8 SecurityID[9];
    // �г�ʱ��(�ٷ�֮һ��)
    uint32 OrigTime;
    // �г�����
    uint32 OrigDate;
};

#pragma pack()


#pragma pack(4)
////////////////////////////////////////////////
///DFITCUserLoginField����¼��Ϣ
////////////////////////////////////////////////
struct SECUserLoginField
{
    int8		accountID[30];					//�û���
    int8		passwd[30];						//����
};

////////////////////////////////////////////////
///DFITCPasswdChangeField���޸�������Ϣ
////////////////////////////////////////////////
struct SECPasswdChangeField
{
    int8		AccountID[30];					//�û���
    int8		OldPassword[30];				//������
    int8		NewPassword[30];				//������
};

////////////////////////////////////////////////
///DFITCUserLogoutField���ǳ���Ϣ
////////////////////////////////////////////////
struct SECUserLogoutField
{
    int8		AccountID[30];					//�û���
};

////////////////////////////////////////////////
///ErrorRtnField����¼���ǳ����޸����뷵����Ϣ
////////////////////////////////////////////////
struct ErrorRtnField
{
    int8		ErrorID;						//0Ϊ�ɹ� ��0Ϊʧ��
    int8		ErrorMsg[128];					//ʧ��ʱ�����ش�����Ϣ					
};

#pragma pack()

#endif // !defined(AFX_HYQUOTE_H__INCLUDED_)
