/**
 * ��Ȩ����(C)2012-2016, �����ɴ���Ϣ�������޹�˾
 * �ļ����ƣ�DFITCL2ApiDataType.h
 * �ļ�˵��������ӿ�������������͵�ͷ�ļ�
 * ��ǰ�汾��1.0.6
 * ���ߣ�Datafeed��Ŀ��
 * �������ڣ�2014��03��14��
 */             
#if !defined(AFX_HYQUOTE_H__INCLUDED_)
#define AFX_HYQUOTE_H__INCLUDED_
//#include <limits>
#include "BasicDataType.h"
#pragma pack(4)

////////////////////////////////////////////////
///MDBestAndDeep���������嵵�������
////////////////////////////////////////////////
typedef struct MDBestAndDeep{
    INT1		Type;
    UINT4		Length;							//���ĳ���
    UINT4		Version;						//�汾��1��ʼ
    UINT4		Time;							//Ԥ���ֶ�
    INT1		Exchange[3];					//������
    INT1		Contract[80];					//��Լ����
    BOOL		SuspensionSign;					//ͣ�Ʊ�־
    REAL4		LastClearPrice;					//������
    REAL4		ClearPrice;						//������
    REAL4		AvgPrice;						//�ɽ�����
    REAL4		LastClose;						//������
    REAL4		Close;							//������
    REAL4		OpenPrice;						//����
    UINT4		LastOpenInterest;				//��ֲ���
    UINT4		OpenInterest;					//�ֲ���
    REAL4		LastPrice;						//���¼�
    UINT4		MatchTotQty;					//�ɽ�����
    REAL8		Turnover;						//�ɽ����
    REAL4		RiseLimit;						//��߱���
    REAL4		FallLimit;						//��ͱ���
    REAL4		HighPrice;						//��߼�
    REAL4		LowPrice;						//��ͼ�
    REAL4		PreDelta;						//����ʵ��
    REAL4		CurrDelta;						//����ʵ��
    REAL4		BuyPriceOne;					//����۸�1
    UINT4		BuyQtyOne;						//��������1
	UINT4		BuyImplyQtyOne;					//��1�Ƶ���
    REAL4		BuyPriceTwo;         
    UINT4		BuyQtyTwo;
	UINT4		BuyImplyQtyTwo;
    REAL4		BuyPriceThree;
    UINT4		BuyQtyThree;
	UINT4		BuyImplyQtyThree;
    REAL4		BuyPriceFour;
	UINT4		BuyQtyFour;
	UINT4		BuyImplyQtyFour;
    REAL4		BuyPriceFive;
    UINT4		BuyQtyFive;
	UINT4		BuyImplyQtyFive;
    REAL4		SellPriceOne;					//�����۸�1
    UINT4		SellQtyOne;						//�������1
	UINT4		SellImplyQtyOne;				//��1�Ƶ���
    REAL4		SellPriceTwo;        
    UINT4		SellQtyTwo;
	UINT4		SellImplyQtyTwo;
    REAL4		SellPriceThree;
    UINT4		SellQtyThree;
	UINT4		SellImplyQtyThree;
	REAL4		SellPriceFour;
    UINT4		SellQtyFour;
	UINT4		SellImplyQtyFour;
    REAL4		SellPriceFive;
    UINT4		SellQtyFive;
	UINT4		SellImplyQtyFive;
	INT1		GenTime[13];					//�������ʱ��
	UINT4		LastMatchQty;					//���³ɽ���
	INT4		InterestChg;					//�ֲ����仯
	REAL4		LifeLow;						//��ʷ��ͼ�
    REAL4		LifeHigh;						//��ʷ��߼�
    REAL8		Delta;							//delta
    REAL8		Gamma;							//gama
    REAL8		Rho;							//rho
    REAL8		Theta;							//theta
    REAL8		Vega;							//vega
	INT1		TradeDate[9];					//��������
	INT1		LocalDate[9];					//��������
}THYQuote;

////////////////////////////////////////////////
///MDTenEntrust�����ż�λ��ʮ��ί��
////////////////////////////////////////////////
typedef struct MDTenEntrust{
    INT1		Type;							//�������ʶ
    UINT4		Len;
    INT1		Contract[80];					//��Լ����
    REAL8		BestBuyOrderPrice;				//�۸�
    UINT4		BestBuyOrderQtyOne;				//ί����1
    UINT4		BestBuyOrderQtyTwo;				//ί����2
    UINT4		BestBuyOrderQtyThree;			//ί����3
    UINT4		BestBuyOrderQtyFour;			//ί����4
    UINT4		BestBuyOrderQtyFive;			//ί����5
    UINT4		BestBuyOrderQtySix;				//ί����6
    UINT4		BestBuyOrderQtySeven;			//ί����7
    UINT4		BestBuyOrderQtyEight;			//ί����8
    UINT4		BestBuyOrderQtyNine;			//ί����9
    UINT4		BestBuyOrderQtyTen;				//ί����10
    REAL8		BestSellOrderPrice;				//�۸�
    UINT4		BestSellOrderQtyOne;			//ί����1
    UINT4		BestSellOrderQtyTwo;			//ί����2
    UINT4		BestSellOrderQtyThree;			//ί����3
    UINT4		BestSellOrderQtyFour;			//ί����4
    UINT4		BestSellOrderQtyFive;			//ί����5
    UINT4		BestSellOrderQtySix;			//ί����6
    UINT4		BestSellOrderQtySeven;			//ί����7
    UINT4		BestSellOrderQtyEight;			//ί����8
    UINT4		BestSellOrderQtyNine;			//ί����9
    UINT4		BestSellOrderQtyTen;			//ί����10
    INT1		GenTime[13];					//����ʱ��
}TENENTRUST;

////////////////////////////////////////////////
///MDOrderStatistic����Ȩƽ���Լ�ί����������
////////////////////////////////////////////////
typedef struct MDOrderStatistic{
    INT1		Type;							//�������ʶ
    UINT4		Len;
    INT1		ContractID[80];					//��Լ��
    UINT4		TotalBuyOrderNum;				//��ί������
    UINT4		TotalSellOrderNum;				//��ί������
    REAL8		WeightedAverageBuyOrderPrice;	//��Ȩƽ��ί��۸�
    REAL8		WeightedAverageSellOrderPrice;	//��Ȩƽ��ί���۸�
}ORDERSTATISTIC;

////////////////////////////////////////////////
///MDRealTimePrice��ʵʱ�����
////////////////////////////////////////////////
typedef struct MDRealTimePrice{
    INT1		Type;							//�������ʶ
    UINT4		Len;
    INT1		ContractID[80];					//��Լ��
    REAL8		RealTimePrice;					//ʵʱ�����
}REALTIMEPRICE;

////////////////////////////////////////////////
///MDMarchPriceQty���ּ�λ�ɽ�
////////////////////////////////////////////////
typedef struct MDMarchPriceQty{
    INT1		Type;							//�������ʶ
    UINT4		Len;
    INT1		ContractID[80];					//��Լ��
    REAL8		PriceOne;						//�۸�
    UINT4		PriceOneBOQty;					//������
    UINT4		PriceOneBEQty;					//��ƽ����
    UINT4		PriceOneSOQty;					//��������
    UINT4		PriceOneSEQty;					//��ƽ����
    REAL8		PriceTwo;						//�۸�
    UINT4		PriceTwoBOQty;					//������
    UINT4		PriceTwoBEQty;					//��ƽ����
    UINT4		PriceTwoSOQty;					//��������
    UINT4		PriceTwoSEQty;					//��ƽ����
    REAL8		PriceThree;						//�۸�
    UINT4		PriceThreeBOQty;				//������
    UINT4		PriceThreeBEQty;				//��ƽ����
    UINT4		PriceThreeSOQty;				//��������
    UINT4		PriceThreeSEQty;				//��ƽ����
    REAL8		PriceFour;						//�۸�
    UINT4		PriceFourBOQty;					//������
    UINT4		PriceFourBEQty;					//��ƽ����
    UINT4		PriceFourSOQty;					//��������
    UINT4		PriceFourSEQty;					//��ƽ����
    REAL8		PriceFive;						//�۸�
    UINT4		PriceFiveBOQty;					//������
    UINT4		PriceFiveBEQty;					//��ƽ����
    UINT4		PriceFiveSOQty;					//��������
    UINT4		PriceFiveSEQty;					//��ƽ����
}MARCHPRICEQTY;

////////////////////////////////////////////////
///DFITCUserLoginField����¼��Ϣ
////////////////////////////////////////////////
struct DFITCUserLoginField
{
    LONG		lRequestID;						//����
    INT1		accountID[30];					//�û���
    INT1		passwd[30];						//����
};

////////////////////////////////////////////////
///DFITCPasswdChangeField���޸�������Ϣ
////////////////////////////////////////////////
struct DFITCPasswdChangeField
{
    LONG		RequestID;						//����
    INT1		AccountID[30];					//�û���
    INT1		OldPassword[30];				//������
    INT1		NewPassword[30];				//������
};

////////////////////////////////////////////////
///DFITCUserLogoutField���ǳ���Ϣ
////////////////////////////////////////////////
struct DFITCUserLogoutField
{
    LONG		RequestID;						//����
    INT1		AccountID[30];					//�û���
};

////////////////////////////////////////////////
///ErrorRtnField����¼���ǳ����޸����뷵����Ϣ
////////////////////////////////////////////////
struct ErrorRtnField
{
    LONG		LocalOrderID;					//����
    INT4		ErrorID;						//0Ϊ�ɹ� ��0Ϊʧ��
    INT1		ErrorMsg[128];					//ʧ��ʱ�����ش�����Ϣ					
};

////////////////////////////////////////////////
///MAX_DBL�������г��ֵ�������double����ֵ�ı�ʾ
//////////////////////////////////////////////// 
//double const MAX_DBL =  (std::numeric_limits<double>::max)();

#pragma pack()
#endif // !defined(AFX_HYQUOTE_H__INCLUDED_)