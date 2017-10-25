
ZORRO_BUILD_VARIABLE(var, Slider1, g->vSlider[1])
ZORRO_BUILD_VARIABLE(var, Slider2, g->vSlider[2])
ZORRO_BUILD_VARIABLE(var, Slider3, g->vSlider[3])

ZORRO_BUILD_VARIABLE  (int    , PlotScale  , g->nPlotScale)
ZORRO_BUILD_VARIABLE  (int    , PlotWidth  , g->nPlotWidth)
ZORRO_BUILD_VARIABLE  (int    , PlotHeight1, g->nPlotHeight1)
ZORRO_BUILD_VARIABLE  (int    , PlotHeight2, g->nPlotHeight2)
ZORRO_BUILD_VARIABLE  (int    , PlotDate   , g->nPlotDate)
ZORRO_BUILD_VARIABLE  (int    , PlotBars   , g->nPlotBars)
ZORRO_BUILD_VARIABLE  (int    , PlotPeriod , g->nPlotPeriod)
ZORRO_BUILD_VARIABLE  (EColor , ColorDn    , g->dwColorDn)
ZORRO_BUILD_VARIABLE  (EColor , ColorUp    , g->dwColorUp)
ZORRO_BUILD_VARIABLE  (EColor , ColorCandle, g->dwColorCandle)
ZORRO_BUILD_VARIABLE  (EColor , ColorEquity, g->dwColorEquity)
ZORRO_BUILD_VARIABLE  (EColor , ColorDD    , g->dwColorDD)
ZORRO_BUILD_VARIABLE  (EColor , ColorWin   , g->dwColorWin)
ZORRO_BUILD_VARIABLE  (EColor , ColorLoss  , g->dwColorLoss)
ZORRO_BUILD_VARPOINTER(EColor*, ColorBars  , g->dwColorBars)
ZORRO_BUILD_VARPOINTER(EColor*, ColorPanel , g->dwColorPanel)

ZORRO_BUILD_VARIABLE(var, PIP         , g->asset->vPIP)
ZORRO_BUILD_VARIABLE(var, PIPCost     , g->asset->vPIPCost)
ZORRO_BUILD_VARIABLE(var, MarginCost  , g->asset->vMarginCost)
ZORRO_BUILD_VARIABLE(var, Leverage    , g->asset->vLeverage)
ZORRO_BUILD_VARIABLE(var, LotAmount   , g->asset->vLotAmount)
ZORRO_BUILD_VARIABLE(var, Spread      , g->asset->vSpread)
ZORRO_BUILD_VARIABLE(var, RollLong    , g->asset->vRollLong)
ZORRO_BUILD_VARIABLE(var, RollShort   , g->asset->vRollShort)
ZORRO_BUILD_VARIABLE(var, WinPayout   , g->asset->vWinPayout)
ZORRO_BUILD_VARIABLE(var, LossPayout  , g->asset->vLossPayout)
ZORRO_BUILD_VARIABLE(var, Slippage    , g->vSlippage)
ZORRO_BUILD_VARIABLE(var, Commission  , g->asset->vCommission)
ZORRO_BUILD_VARIABLE(var, InitialPrice, g->asset->vInitialPrice)
ZORRO_BUILD_VARIABLE(var, AskPrice    , g->asset->vPrice)
ZORRO_BUILD_VARIABLE(var, TimeAsk     , g->asset->tAsk)
ZORRO_BUILD_VARIABLE(var, TimeBid     , g->asset->tBid)
ZORRO_BUILD_VARIABLE(var, HedgeRatio  , g->asset->vFactor)
ZORRO_BUILD_VARIABLE(EHedgeMode    , Hedge   , g->nHedge)
ZORRO_BUILD_VARIABLE(ETrainFlag    , Optimize, g->nOptimize)
ZORRO_BUILD_VARIABLE(EOrderFillMode, Fill    , g->nFill)
ZORRO_BUILD_VARIABLE(DATE          , Now     , g->tNow)

ZORRO_BUILD_VARPOINTER(ETrainFlag* , TrainMode, &g->nOptimize)
ZORRO_BUILD_VARPOINTER(ETradeFlag* , TradeMode, &g->nTradeMode)
ZORRO_BUILD_VARIABLE  (EPlotMode   , PlotMode ,  g->nPlotMode)
ZORRO_BUILD_VARPOINTER(EPlotMode*  , ChartMode, &g->nPlotMode)

ZORRO_BUILD_VARIABLE(var, Lots        , g->vLots)
ZORRO_BUILD_VARIABLE(var, Margin      , g->vMargin)
ZORRO_BUILD_VARIABLE(var, Risk        , g->vRisk)
ZORRO_BUILD_VARIABLE(var, Entry       , g->vEntry)
ZORRO_BUILD_VARIABLE(var, Stop        , g->vStop)
ZORRO_BUILD_VARIABLE(var, StopFactor  , g->vStopFactor)
ZORRO_BUILD_VARIABLE(var, SpreadFactor, g->vSpreadFactor)
ZORRO_BUILD_VARIABLE(var, OrderLimit  , g->vOrderLimit)
ZORRO_BUILD_VARIABLE(var, Trail       , g->vTrail)
ZORRO_BUILD_VARIABLE(var, TrailSlope  , g->vTrailSlope)
ZORRO_BUILD_VARIABLE(var, TrailStep   , g->vTrailStep)
ZORRO_BUILD_VARIABLE(var, TrailLock   , g->vTrailLock)
ZORRO_BUILD_VARIABLE(var, TrailSpeed  , g->vTrailSpeed)
ZORRO_BUILD_VARIABLE(var, TakeProfit  , g->vTakeProfit)
ZORRO_BUILD_VARIABLE(int, ExitTime    , g->nExitTime)
ZORRO_BUILD_VARIABLE(int, LifeTime    , g->nLifeTime)
ZORRO_BUILD_VARIABLE(int, EntryTime   , g->nEntryTime)
ZORRO_BUILD_VARIABLE(var, EntryDelay  , g->vEntryDelay)
ZORRO_BUILD_VARIABLE(int, MaxLong     , g->nMaxLong)
ZORRO_BUILD_VARIABLE(int, MaxShort    , g->nMaxShort)

ZORRO_BUILD_VARIABLE  (int, LookBack       , g->nLookBack)
ZORRO_BUILD_VARIABLE  (int, UnstablePeriod , g->nUnstablePeriod)
ZORRO_BUILD_VARIABLE  (int, DataSkip       , g->nDataSkip)
ZORRO_BUILD_VARIABLE  (int, DataSplit      , g->nDataSplit)
ZORRO_BUILD_VARIABLE  (var, DataSlope      , g->vDataSlope)
ZORRO_BUILD_VARIABLE  (var, BarPeriod      , g->vBarPeriod)
ZORRO_BUILD_VARIABLE  (int, BarOffset      , g->nBarOffset)
ZORRO_BUILD_VARIABLE  (ETimeZone, BarZone  , g->nBarZone)
ZORRO_BUILD_VARIABLE  (int, FrameOffset    , g->nFrameOffset)
ZORRO_BUILD_VARIABLE  (int, TimeFrame      , g->nTimeFrame)
ZORRO_BUILD_VARIABLE  (int, NumBarCycles   , g->numSampleCycles)
ZORRO_BUILD_VARIABLE  (int, NumSampleCycles, g->numSampleCycles)
ZORRO_BUILD_VARIABLE  (int, NumOptCycles   , g->numOptCycles)
ZORRO_BUILD_VARIABLE  (int, NumWFOCycles   , g->numWFOCycles)
ZORRO_BUILD_VARIABLE  (int, NumTotalCycles , g->numTotalCycles)
ZORRO_BUILD_VARIABLE  (int, NumDays        , g->numDays)
ZORRO_BUILD_VARIABLE  (int, NumYears       , g->numYears)
ZORRO_BUILD_VARIABLE  (int, StartDate      , g->nStartDate)
ZORRO_BUILD_VARIABLE  (int, EndDate        , g->nEndDate)
ZORRO_BUILD_VARIABLE  (int, StartWeek      , g->nStartWeek)
ZORRO_BUILD_VARIABLE  (int, EndWeek        , g->nEndWeek)
ZORRO_BUILD_VARIABLE  (int, StartMarket    , g->nStartMarket)
ZORRO_BUILD_VARIABLE  (int, EndMarket      , g->nEndMarket)
ZORRO_BUILD_VARIABLE  (int, UpdateDays     , g->nUpdateDays)
ZORRO_BUILD_VARIABLE  (int, ReTrainDays    , g->nReTrainDays)
ZORRO_BUILD_VARIABLE  (int, GapDays        , g->nGapDays)
ZORRO_BUILD_VARIABLE  (int, MaxBars        , g->nMaxBars)
ZORRO_BUILD_VARIABLE  (int, NumBars        , g->numBars)
ZORRO_BUILD_VARIABLE  (int, NumMinutes     , g->numMinutes)
ZORRO_BUILD_VARIABLE  (int, Bar            , g->nBar)
ZORRO_BUILD_VARIABLE  (int, StartBar       , g->nFrameStart)
ZORRO_BUILD_EXPRESSION(int, EndBar         , g->nFrameStart + g->numFrameBars)
ZORRO_BUILD_VARIABLE  (int, Day            , g->nDay)
ZORRO_BUILD_VARIABLE  (int, SampleCycle    , g->nSampleCycle)
ZORRO_BUILD_VARIABLE  (int, OptCycle       , g->nOptCycle)
ZORRO_BUILD_VARIABLE  (int, WFOCycle       , g->nWFOCycle)
ZORRO_BUILD_EXPRESSION(int, WFOBar         , g->nBar - g->nWFOStart)
ZORRO_BUILD_VARIABLE  (int, WFOPeriod      , g->nWFOPeriod)
ZORRO_BUILD_VARIABLE  (int, TotalCycle     , g->nTotalCycle)
ZORRO_BUILD_VARIABLE  (int, TradesPerBar   , g->nTradesPerBar)
ZORRO_BUILD_VARIABLE  (int, MinutesPerDay  , g->nMinutesPerDay)
ZORRO_BUILD_VARIABLE  (int, TimeStep       , g->nTimeStep)
ZORRO_BUILD_VARIABLE  (int, LogNumber      , g->nLogNumber)

ZORRO_BUILD_VARIABLE  (int  , LoopNum1      , g->nLoop[0])
ZORRO_BUILD_VARIABLE  (int  , LoopNum2      , g->nLoop[1])
ZORRO_BUILD_VARPOINTER(void*, Loop1         , g->pLoopPar[0])
ZORRO_BUILD_VARPOINTER(void*, Loop2         , g->pLoopPar[1])
ZORRO_BUILD_VARIABLE  (int  , Cycle1        , g->nLoopCycle[0])
ZORRO_BUILD_VARIABLE  (int  , Cycle2        , g->nLoopCycle[1])
ZORRO_BUILD_VARIABLE  (int  , NumLoops1     , g->numLoops[0])
ZORRO_BUILD_VARIABLE  (int  , NumLoops2     , g->numLoops[1])
ZORRO_BUILD_VARIABLE  (int  , SelectWFO     , g->nSelectWFO)
ZORRO_BUILD_VARIABLE  (int  , NumParameters , g->numParTrain)
ZORRO_BUILD_VARIABLE  (int  , ParCycle      , g->nParCycle)
ZORRO_BUILD_VARIABLE  (int  , StepCycle     , g->nStepCycle)
ZORRO_BUILD_VARIABLE  (int  , StepNext      , g->bDoStep)
ZORRO_BUILD_VARIABLE  (EDetrendMode, Detrend, g->nDetrend)
ZORRO_BUILD_VARIABLE  (EWeekendMode, Weekend, g->nWeekend)
ZORRO_BUILD_VARIABLE  (var  , FuzzyRange    , g->vFuzzyRange)
ZORRO_BUILD_VARIABLE  (var  , FuzzyLevel    , g->vFuzzyLevel)
ZORRO_BUILD_VARIABLE  (int  , MonteCarlo    , g->nMonteCarlo)
ZORRO_BUILD_VARIABLE  (int  , Confidence    , g->nConfidence)

ZORRO_BUILD_EXPRESSION(int*      , Command   , g->nCommand)
ZORRO_BUILD_VARIABLE  (int       , NumCores  , g->numCores)
ZORRO_BUILD_VARIABLE  (int       , Core      , g->nCore)
ZORRO_BUILD_VARIABLE  (EVerbosity, Verbose   , g->nVerbose)
ZORRO_BUILD_VARIABLE  (ESaveMode , SaveMode  , g->nSaveMode)
ZORRO_BUILD_VARIABLE  (int       , BoxState  , g->nBoxState)
ZORRO_BUILD_VARIABLE  (int       , TickTime  , g->nTickTime)
ZORRO_BUILD_VARIABLE  (int       , TockTime  , g->nTockTime)
ZORRO_BUILD_VARIABLE  (int       , TickSmooth, g->nTickAvg)
ZORRO_BUILD_VARIABLE  (int       , TickFix   , g->nTimeFix)
ZORRO_BUILD_VARIABLE  (var       , Outlier   , g->vOutlier)
ZORRO_BUILD_VARIABLE  (var       , DDScale   , g->vCBIScale)
ZORRO_BUILD_EXPRESSION(bool      , Train     , is(EStatusFlag::TRAINMODE) != 0)
ZORRO_BUILD_EXPRESSION(bool      , Test      , is(EStatusFlag::TESTMODE) != 0)
ZORRO_BUILD_EXPRESSION(bool      , ReTrain   , is(EStatusFlag::PROCESS) != 0 && is(EStatusFlag::TRAINMODE) != 0 && Core != 0)
ZORRO_BUILD_EXPRESSION(bool      , ReTest    , is(EStatusFlag::PROCESS) != 0 && is(EStatusFlag::TESTMODE) != 0 && Core != 0)

ZORRO_BUILD_VARIABLE  (var, Capital    , g->vCapital)
ZORRO_BUILD_VARIABLE  (var, Balance    , g->vBalance)
ZORRO_BUILD_VARIABLE  (var, Equity     , g->vEquity)
ZORRO_BUILD_VARIABLE  (var, MarginVal  , g->vMarginVal)
ZORRO_BUILD_VARIABLE  (var, MarginTotal, g->vMarginSum)
ZORRO_BUILD_VARIABLE  (var, RiskVal    , g->vRiskSum)
ZORRO_BUILD_VARIABLE  (var, RiskTotal  , g->vRiskSum)
ZORRO_BUILD_EXPRESSION(var, TradeVal   , g->vWinVal - g->vLossVal)

ZORRO_BUILD_VARPOINTER(string*, Assets     , g->pAssets)
ZORRO_BUILD_VARPOINTER(ASSET* , ThisAsset  , g->asset)
ZORRO_BUILD_VARPOINTER(char*  , Asset      , g->asset->sName)
ZORRO_BUILD_VARIABLE  (int    , AssetBar   , g->asset->nBar)
ZORRO_BUILD_VARIABLE  (int    , AssetFrame , g->asset->nFrame)
ZORRO_BUILD_VARIABLE  (int    , AssetZone  , g->asset->nZone)
ZORRO_BUILD_VARIABLE  (int    , AssetMarket, g->asset->nMarket)
ZORRO_BUILD_VARPOINTER(var*   , AssetVar   , g->asset->Skill)
ZORRO_BUILD_VARPOINTER(string , AssetStr   , reinterpret_cast<string>(g->asset->Skill))
ZORRO_BUILD_VARIABLE  (var    , AssetFactor, g->vAssetFactor)
ZORRO_BUILD_VARIABLE  (int    , LotsPool   , g->asset->nNetSum)
ZORRO_BUILD_VARIABLE  (int    , LotsPhantom, g->asset->nPhantomSum)
ZORRO_BUILD_VARPOINTER(char*  , Symbol     , g->asset->sSymbol)
ZORRO_BUILD_VARIABLE  (int    , Component  , g->statLong->nComponent)
ZORRO_BUILD_VARIABLE  (int    , Multiplier , g->asset->nMultiplier)

ZORRO_BUILD_VARIABLE(var, PatternCount, g->vAdvise[0])
ZORRO_BUILD_VARIABLE(var, PatternRate , g->vAdvise[1])
ZORRO_BUILD_VARIABLE(var, PatternPF   , g->vAdvise[2])

ZORRO_BUILD_VARIABLE(string, AssetList  , g->sAssetList)
ZORRO_BUILD_VARIABLE(string, FactorList , g->sFactorList)
ZORRO_BUILD_VARIABLE(string, Algo       , g->sAlgo)
ZORRO_BUILD_VARIABLE(string, Script     , g->sScript)
ZORRO_BUILD_VARIABLE(string, Factors    , g->sFactors)
ZORRO_BUILD_VARIABLE(string, Broker     , g->sBroker)
ZORRO_BUILD_VARIABLE(string, Account    , g->sAccount)
ZORRO_BUILD_VARIABLE(string, History    , g->sHistory)
ZORRO_BUILD_VARIABLE(string, WebFolder  , g->sWebFolder)
ZORRO_BUILD_VARIABLE(string, ZorroFolder, g->sZorroFolder)
ZORRO_BUILD_VARIABLE(string, Curves     , g->sCurves)

ZORRO_BUILD_VARIABLE  (var, WinLong           , g->statLong->vWin)
ZORRO_BUILD_VARIABLE  (var, WinShort          , g->statShort->vWin)
ZORRO_BUILD_VARIABLE  (var, WinTotal          , g->w.vWin)
ZORRO_BUILD_VARIABLE  (var, PipsTotal         , g->w.vPips)
ZORRO_BUILD_VARIABLE  (var, LossLong          , g->statLong->vLoss)
ZORRO_BUILD_VARIABLE  (var, LossShort         , g->statShort->vLoss)
ZORRO_BUILD_VARIABLE  (var, LossTotal         , g->w.vLoss)
ZORRO_BUILD_VARIABLE  (var, WinValLong        , g->statLong->vWinVal)
ZORRO_BUILD_VARIABLE  (var, WinValShort       , g->statShort->vWinVal)
ZORRO_BUILD_VARIABLE  (var, WinValTotal       , g->vWinVal)
ZORRO_BUILD_VARIABLE  (var, LossValLong       , g->statLong->vLossVal)
ZORRO_BUILD_VARIABLE  (var, LossValShort      , g->statShort->vLossVal)
ZORRO_BUILD_VARIABLE  (var, LossValTotal      , g->vLossVal)
ZORRO_BUILD_VARIABLE  (int, NumWinLong        , g->statLong->numWin)
ZORRO_BUILD_VARIABLE  (int, NumWinShort       , g->statShort->numWin)
ZORRO_BUILD_VARIABLE  (int, NumWinTotal       , g->w.numWin)
ZORRO_BUILD_VARIABLE  (int, NumLossLong       , g->statLong->numLoss)
ZORRO_BUILD_VARIABLE  (int, NumLossShort      , g->statShort->numLoss)
ZORRO_BUILD_VARIABLE  (int, NumLossTotal      , g->w.numLoss)
ZORRO_BUILD_VARIABLE  (int, WinStreakLong     , g->statLong->nWinStreak)
ZORRO_BUILD_VARIABLE  (int, WinStreakShort    , g->statShort->nWinStreak)
ZORRO_BUILD_VARIABLE  (int, WinStreakTotal    , g->nWinStreak)
ZORRO_BUILD_VARIABLE  (int, LossStreakLong    , g->statLong->nLossStreak)
ZORRO_BUILD_VARIABLE  (int, LossStreakShort   , g->statShort->nLossStreak)
ZORRO_BUILD_VARIABLE  (int, LossStreakTotal   , g->nLossStreak)
ZORRO_BUILD_VARIABLE  (var, WinStreakValLong  , g->statLong->vWinStreakVal)
ZORRO_BUILD_VARIABLE  (var, WinStreakValShort , g->statShort->vWinStreakVal)
ZORRO_BUILD_VARIABLE  (var, WinStreakValTotal , g->vWinStreakVal)
ZORRO_BUILD_VARIABLE  (var, LossStreakValLong , g->statLong->vLossStreakVal)
ZORRO_BUILD_VARIABLE  (var, LossStreakValShort, g->statShort->vLossStreakVal)
ZORRO_BUILD_VARIABLE  (var, LossStreakValTotal, g->vLossStreakVal)
ZORRO_BUILD_VARIABLE  (int, NumWinningLong    , g->statLong->numWinning)
ZORRO_BUILD_VARIABLE  (int, NumWinningShort   , g->statShort->numWinning)
ZORRO_BUILD_VARIABLE  (int, NumLosingLong     , g->statLong->numLosing)
ZORRO_BUILD_VARIABLE  (int, NumLosingShort    , g->statShort->numLosing)
ZORRO_BUILD_VARIABLE  (int, NumShortTotal     , g->numShort)
ZORRO_BUILD_VARIABLE  (int, NumLongTotal      , g->numLong)
ZORRO_BUILD_EXPRESSION(int, NumOpenLong       , NumWinningLong + NumLosingLong)
ZORRO_BUILD_EXPRESSION(int, NumOpenShort      , NumWinningShort + NumLosingShort)
ZORRO_BUILD_EXPRESSION(int, NumOpenTotal      , NumShortTotal + NumLongTotal)
ZORRO_BUILD_VARIABLE  (int, NumOpenPhantom    , g->numPhantom)
ZORRO_BUILD_VARIABLE  (int, NumPendingLong    , g->statLong->numPending)
ZORRO_BUILD_VARIABLE  (int, NumPendingShort   , g->statShort->numPending)
ZORRO_BUILD_VARIABLE  (int, NumPendingTotal   , g->numPending)
ZORRO_BUILD_VARIABLE  (int, NumRejected       , g->numRejected)
ZORRO_BUILD_VARIABLE  (int, NumTrades         , g->numTrades)
ZORRO_BUILD_VARIABLE  (var, WinMaxLong        , g->statLong->vWinMax)
ZORRO_BUILD_VARIABLE  (var, WinMaxShort       , g->statShort->vWinMax)
ZORRO_BUILD_VARIABLE  (var, WinMaxTotal       , g->w.vWinMax)
ZORRO_BUILD_VARIABLE  (var, LossMaxLong       , g->statLong->vLossMax)
ZORRO_BUILD_VARIABLE  (var, LossMaxShort      , g->statShort->vLossMax)
ZORRO_BUILD_VARIABLE  (var, LossMaxTotal      , g->w.vLossMax)
ZORRO_BUILD_EXPRESSION(var, BalanceLong       , WinLong - LossLong)
ZORRO_BUILD_EXPRESSION(var, BalanceShort      , WinShort - LossShort)
ZORRO_BUILD_EXPRESSION(var, EquityLong        , BalanceLong + WinValLong - LossValLong)
ZORRO_BUILD_EXPRESSION(var, EquityShort       , BalanceShort + WinValShort - LossValShort)
ZORRO_BUILD_EXPRESSION(var, ProfitClosed      , WinLong - LossLong + WinShort - LossShort)
ZORRO_BUILD_EXPRESSION(var, ProfitOpen        , WinValLong - LossValLong + WinValShort - LossValShort)
ZORRO_BUILD_VARIABLE  (var, OptimalFLong      , g->statLong->vOptimalF)
ZORRO_BUILD_VARIABLE  (var, OptimalFShort     , g->statShort->vOptimalF)
ZORRO_BUILD_VARIABLE  (var, OptimalF          , g->statShort->vOptimalF2)
ZORRO_BUILD_VARIABLE  (var, OptimalFRatio     , g->vOptimalFRatio)
ZORRO_BUILD_VARIABLE  (var, ObjectiveLong     , g->statLong->vTrainPF)
ZORRO_BUILD_VARIABLE  (var, ObjectiveShort    , g->statShort->vTrainPF)
ZORRO_BUILD_EXPRESSION(var*, AlgoVar2         , g->statLong->Skill)
ZORRO_BUILD_EXPRESSION(var*, AlgoVar          , g->statShort->Skill)
ZORRO_BUILD_EXPRESSION(var*, ResultLong       , g->statLong->Result)
ZORRO_BUILD_EXPRESSION(var*, ResultShort      , g->statShort->Result)
ZORRO_BUILD_VARIABLE  (PERFORMANCE, ThisPerformance, g->w)

ZORRO_BUILD_VARIABLE  (var   , DrawDownMax    , g->w.vDrawDown)
ZORRO_BUILD_VARIABLE  (var   , MAE            , g->w.vEquityDown)
ZORRO_BUILD_VARIABLE  (var   , MarginMax      , g->w.vMarginMax)
ZORRO_BUILD_VARIABLE  (var   , RiskMax        , g->w.vRiskMax)
ZORRO_BUILD_VARIABLE  (var   , SpreadCost     , g->w.vSpreadCost)
ZORRO_BUILD_EXPRESSION(var   , SlippageCost   , g->w.vSlippageWin + g->w.vSlippageLoss)
ZORRO_BUILD_VARIABLE  (var   , RollCost       , g->w.vRollCost)
ZORRO_BUILD_VARIABLE  (var   , CommissionCost , g->w.vCommissionCost)
ZORRO_BUILD_VARIABLE  (var   , ReturnMean     , g->w.vMean)
ZORRO_BUILD_VARIABLE  (var   , ReturnStdDev   , g->w.vStdDev)
ZORRO_BUILD_VARIABLE  (var   , Ulcer          , g->w.vUlcer)
ZORRO_BUILD_VARIABLE  (var   , R2             , g->w.vR2)
ZORRO_BUILD_VARIABLE  (int   , DrawDownBars   , g->w.numDrawDownBars)
ZORRO_BUILD_VARIABLE  (int   , DrawDownBarsMax, g->w.numDrawDownMax)
ZORRO_BUILD_VARIABLE  (int   , LossStreakMax  , g->w.numLossStreakMax)
ZORRO_BUILD_VARIABLE  (int   , NumOpenMax     , g->numTradesMax)
ZORRO_BUILD_VARIABLE  (int   , InMarketBars   , g->w.numMarketBars)
ZORRO_BUILD_VARIABLE  (int   , InMarketSum    , g->w.numMarketTotal)
ZORRO_BUILD_VARPOINTER(float*, Results        , g->pResults)
ZORRO_BUILD_VARPOINTER(var*  , ResultsDaily   , g->pCurve)
ZORRO_BUILD_VARPOINTER(var*  , DatesDaily     , g->pTime)
ZORRO_BUILD_VARPOINTER(BAR*  , Bars           , g->bars)

ZORRO_BUILD_EXPRESSION(bool, TradeIsOpen    , TradeFlag(ETradeFlag::OPEN))
ZORRO_BUILD_EXPRESSION(bool, TradeIsPending , TradeFlag(ETradeFlag::WAITBUY))
ZORRO_BUILD_EXPRESSION(bool, TradeIsClosed  , !TradeIsOpen && TradeFlag(ETradeFlag(ETradeFlag::STOPPED|ETradeFlag::PROFIT|ETradeFlag::TIME|ETradeFlag::SOLD|ETradeFlag::EXIT|ETradeFlag::REMOVED|ETradeFlag::REVERSED|ETradeFlag::EXPIRED)))
ZORRO_BUILD_EXPRESSION(bool, TradeIsShort   , TradeFlag(ETradeFlag::BID))
ZORRO_BUILD_EXPRESSION(bool, TradeIsLong    , !TradeFlag(ETradeFlag::BID))
ZORRO_BUILD_EXPRESSION(bool, TradeIsPhantom , TradeFlag(ETradeFlag::PHANTOM))
ZORRO_BUILD_EXPRESSION(bool, TradeIsPool    , TradeIs(ETradeFlag(ETradeFlag::PHANTOM|ETradeFlag::NET)))
ZORRO_BUILD_EXPRESSION(bool, TradeIsVirtual , TradeIs(ETradeFlag(ETradeFlag::PHANTOM|ETradeFlag::NET)))
ZORRO_BUILD_EXPRESSION(bool, TradeIsNewBar  , g->tr->nBarClose != g->nBar)
ZORRO_BUILD_EXPRESSION(bool, TradeIsStop    , TradeIs(ETradeFlag(ETradeFlag::EVENT|ETradeFlag::STOPPED)))
ZORRO_BUILD_EXPRESSION(bool, TradeIsProfit  , TradeIs(ETradeFlag(ETradeFlag::EVENT|ETradeFlag::PROFIT)))
ZORRO_BUILD_EXPRESSION(bool, TradeIsEntry   , TradeIs(ETradeFlag(ETradeFlag::EVENT|ETradeFlag::WAITBUY)))
ZORRO_BUILD_EXPRESSION(bool, TradeIsContract, (g->tr->nContract & EContractType(EContractType::PUT|EContractType::CALL|EContractType::FUTURE)) != 0)
ZORRO_BUILD_EXPRESSION(bool, TradeIsCall    , (g->tr->nContract & EContractType::CALL) != 0)
ZORRO_BUILD_EXPRESSION(bool, TradeIsPut     , (g->tr->nContract & EContractType::PUT) != 0)

ZORRO_BUILD_VARPOINTER(TRADE*       , ThisTrade       , g->tr)
ZORRO_BUILD_VARIABLE  (float        , TradePriceOpen  , g->tr->fEntryPrice)
ZORRO_BUILD_VARIABLE  (float        , TradePriceClose , g->tr->fExitPrice)
ZORRO_BUILD_VARIABLE  (float        , TradeResult     , g->tr->fResult)
ZORRO_BUILD_VARIABLE  (float        , TradeProfit     , g->tr->fResult)
ZORRO_BUILD_VARIABLE  (float        , TradeStopLimit  , g->tr->fStopLimit)
ZORRO_BUILD_VARIABLE  (float        , TradeStopDiff   , g->tr->fStopDiff)
ZORRO_BUILD_VARIABLE  (float        , TradeProfitLimit, g->tr->fProfitLimit)
ZORRO_BUILD_VARIABLE  (float        , TradeTrailLimit , g->tr->fTrailLimit)
ZORRO_BUILD_VARIABLE  (float        , TradeTrailDiff  , g->tr->fTrailDiff)
ZORRO_BUILD_VARIABLE  (float        , TradeTrailSlope , g->tr->fTrailSlope)
ZORRO_BUILD_VARIABLE  (float        , TradeTrailStep  , g->tr->fTrailStep)
ZORRO_BUILD_VARIABLE  (float        , TradeTrailLock  , g->tr->fTrailLock)
ZORRO_BUILD_VARIABLE  (float        , TradeEntryLimit , g->tr->fEntryLimit)
ZORRO_BUILD_VARIABLE  (float        , TradeUnits      , g->tr->fUnits)
ZORRO_BUILD_VARIABLE  (int          , TradeExitTime   , g->tr->nExitTime)
ZORRO_BUILD_EXPRESSION(int          , TradeTime       , g->nBar - g->tr->nBarOpen)
ZORRO_BUILD_VARIABLE  (int          , TradeLots       , g->tr->nLots)
ZORRO_BUILD_VARIABLE  (int          , TradeID         , g->tr->nID)
ZORRO_BUILD_VARIABLE  (int          , TradeBarOpen    , g->tr->nBarOpen)
ZORRO_BUILD_VARIABLE  (int          , TradeBarClose   , g->tr->nBarClose)
ZORRO_BUILD_VARIABLE  (float        , TradeMAE        , g->tr->fMAE)
ZORRO_BUILD_VARIABLE  (float        , TradeMFE        , g->tr->fMFE)
ZORRO_BUILD_VARIABLE  (float        , TradeRoll       , g->tr->fRoll)
ZORRO_BUILD_VARIABLE  (EContractType, TradeContract   , g->tr->nContract)
ZORRO_BUILD_VARIABLE  (float        , TradeStrike     , g->tr->fStrike)
ZORRO_BUILD_VARIABLE  (float        , TradeUnderlying , g->tr->fUnl)
ZORRO_BUILD_VARPOINTER(var*         , TradeVar        , g->tr->Skill)
ZORRO_BUILD_VARPOINTER(float*       , TradeParameter  , g->tr->fArg)
ZORRO_BUILD_VARPOINTER(ETradeDir    , TradeDir        , TradeIsShort ? ETradeDir::DOWN : ETradeDir::UP)
ZORRO_BUILD_VARPOINTER(STATUS*      , TradeStatus     , g->tr->status)
ZORRO_BUILD_VARPOINTER(char*        , TradeAlgo       , g->tr->status->sAlgo)
ZORRO_BUILD_VARPOINTER(char*        , TradeAsset      , g->tr->status->asset->sName)

ZORRO_BUILD_VARPOINTER(CONTRACT*, Contracts   , g->asset->pContracts)
ZORRO_BUILD_VARIABLE  (int  , NumContracts    , g->asset->numContracts)
ZORRO_BUILD_EXPRESSION(int  , ContractRow     , g->asset->nContractRow + g->asset->nContractOffs)
ZORRO_BUILD_VARPOINTER(CONTRACT*, ThisContract, g->contract)
ZORRO_BUILD_VARIABLE  (float, ContractAsk     , g->contract->fAsk)
ZORRO_BUILD_VARIABLE  (float, ContractBid     , g->contract->fBid)
ZORRO_BUILD_VARIABLE  (float, ContractVol     , g->contract->fVol)
ZORRO_BUILD_VARIABLE  (float, ContractStrike  , g->contract->fStrike)
ZORRO_BUILD_VARIABLE  (long , ContractExpiry  , g->contract->Expiry)
ZORRO_BUILD_VARIABLE  (long , ContractType    , g->contract->Type)

ZORRO_BUILD_VARIABLE(var, rAroonDown     , g->vAroonDown)
ZORRO_BUILD_VARIABLE(var, rAroonUp       , g->vAroonUp)
ZORRO_BUILD_VARIABLE(var, rRealUpperBand , g->vRealUpperBand)
ZORRO_BUILD_VARIABLE(var, rRealMiddleBand, g->vRealMiddleBand)
ZORRO_BUILD_VARIABLE(var, rRealLowerBand , g->vRealLowerBand)
ZORRO_BUILD_VARIABLE(var, rInPhase       , g->vInPhase)
ZORRO_BUILD_VARIABLE(var, rQuadrature    , g->vQuadrature)
ZORRO_BUILD_VARIABLE(var, rSine          , g->vSine)
ZORRO_BUILD_VARIABLE(var, rLeadSine      , g->vLeadSine)
ZORRO_BUILD_VARIABLE(var, rMACD          , g->vMACD)
ZORRO_BUILD_VARIABLE(var, rMACDSignal    , g->vMACDSignal)
ZORRO_BUILD_VARIABLE(var, rMACDHist      , g->vMACDHist)
ZORRO_BUILD_VARIABLE(var, rMAMA          , g->vMAMA)
ZORRO_BUILD_VARIABLE(var, rFAMA          , g->vFAMA)
ZORRO_BUILD_VARIABLE(var, rMin           , g->vMin)
ZORRO_BUILD_VARIABLE(var, rMax           , g->vMax)
ZORRO_BUILD_VARIABLE(var, rMinIdx        , g->vMinIdx)
ZORRO_BUILD_VARIABLE(var, rMaxIdx        , g->vMaxIdx)
ZORRO_BUILD_VARIABLE(var, rSlowK         , g->vSlowK)
ZORRO_BUILD_VARIABLE(var, rSlowD         , g->vSlowD)
ZORRO_BUILD_VARIABLE(var, rFastK         , g->vFastK)
ZORRO_BUILD_VARIABLE(var, rFastD         , g->vFastD)
ZORRO_BUILD_VARIABLE(var, rDominantPeriod, g->vDominantPeriod)
ZORRO_BUILD_VARIABLE(var, rDominantPhase , g->vDominantPhase)
ZORRO_BUILD_VARIABLE(var, rRed           , g->vRed)
ZORRO_BUILD_VARIABLE(var, rGreen         , g->vGreen)
ZORRO_BUILD_VARIABLE(var, rBlue          , g->vBlue)
ZORRO_BUILD_VARIABLE(var, rError         , g->vError)
ZORRO_BUILD_VARIABLE(var, rEMA           , g->vEMA)
ZORRO_BUILD_VARIABLE(var, rPeak          , g->vPeak)
ZORRO_BUILD_VARIABLE(var, rSlope         , g->vSlope)
ZORRO_BUILD_VARIABLE(var, rSign          , g->vSign)
ZORRO_BUILD_VARIABLE(var, rLength        , g->vLength)
ZORRO_BUILD_VARIABLE(var, rMomentum      , g->vMomentum)
ZORRO_BUILD_VARIABLE(var, rTenkan        , g->vTenkan)
ZORRO_BUILD_VARIABLE(var, rKijun         , g->vKijun)
ZORRO_BUILD_VARIABLE(var, rSenkouA       , g->vSenkouA)
ZORRO_BUILD_VARIABLE(var, rSenkouB       , g->vSenkouB)

ZORRO_BUILD_EXPRESSION(const char*, YMDHMS, "%y%m%d %H:%M:%S")
ZORRO_BUILD_EXPRESSION(const char*, HMS   , "%H:%M:%S")
ZORRO_BUILD_EXPRESSION(const char*, YMD   , "%Y%m%d")

#undef ZORRO_BUILD_VARIABLE
#undef ZORRO_BUILD_EXPRESSION
#undef ZORRO_BUILD_VARPOINTER
