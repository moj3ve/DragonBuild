//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Stocks/StockChartViewDelegate-Protocol.h>

@class ChartUpdater, NSString, NetPreferences, Stock, StockChartView, StockFetcher, StockManager, StockUpdateManager, StocksLayout, StocksStyle, UIButton, UILabel, UITableView, UIView;

@interface StockPlatterViewController : UIViewController <StockChartViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    StockFetcher *_stockFetcher;
    Stock *_stock;
    long long _chartInterval;
    UITableView *_stocksTableView;
    UIView *_statusBarView;
    NetPreferences *_netPreferences;
    StockUpdateManager *_stockUpdateManager;
    StockChartView *_chartView;
    ChartUpdater *_chartUpdater;
    StocksStyle *_style;
    StocksLayout *_layout;
    StockManager *_stockManager;
    UIButton *_attributionButton;
    UILabel *_exchangeStatusLabel;
    NSString *_stockTicker;
    long long _rowDataType;
}

@property(nonatomic) long long rowDataType; // @synthesize rowDataType=_rowDataType;
@property(retain, nonatomic) NSString *stockTicker; // @synthesize stockTicker=_stockTicker;
@property(retain, nonatomic) UILabel *exchangeStatusLabel; // @synthesize exchangeStatusLabel=_exchangeStatusLabel;
@property(retain, nonatomic) UIButton *attributionButton; // @synthesize attributionButton=_attributionButton;
@property(retain, nonatomic) StockManager *stockManager; // @synthesize stockManager=_stockManager;
@property(retain, nonatomic) StocksLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) StocksStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) ChartUpdater *chartUpdater; // @synthesize chartUpdater=_chartUpdater;
@property(retain, nonatomic) StockChartView *chartView; // @synthesize chartView=_chartView;
@property(retain, nonatomic) StockUpdateManager *stockUpdateManager; // @synthesize stockUpdateManager=_stockUpdateManager;
@property(retain, nonatomic) NetPreferences *netPreferences; // @synthesize netPreferences=_netPreferences;
@property(retain, nonatomic) UIView *statusBarView; // @synthesize statusBarView=_statusBarView;
@property(retain, nonatomic) UITableView *stocksTableView; // @synthesize stocksTableView=_stocksTableView;
@property(nonatomic) long long chartInterval; // @synthesize chartInterval=_chartInterval;
@property(retain, nonatomic) Stock *stock; // @synthesize stock=_stock;
@property(retain, nonatomic) StockFetcher *stockFetcher; // @synthesize stockFetcher=_stockFetcher;
// - (void).cxx_destruct;
- (void)_attributionButtonPressed:(id)arg1;
- (void)stockChartViewNeedsLoadingStatusUpdated:(id)arg1;
- (BOOL)stockChartViewIsCurrentChartView:(id)arg1;
- (void)stockChartView:(id)arg1 chartIntervalDidChange:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_cleanup;
- (void)_updateExchangeData;
- (void)_setupStockWithTicker:(id)arg1;
- (void)updateChartForInterval:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStockTicker:(id)arg1;

@end

