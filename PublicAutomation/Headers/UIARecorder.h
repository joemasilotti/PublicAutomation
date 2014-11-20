//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSMutableString, NSTimer, UIARecorderAction, UIATarget, UIAXElement;
@protocol UIARecorderDelegate;

@interface UIARecorder : NSObject
{
    _Bool _isRecording;
    UIATarget *_uiaTarget;
    UIARecorderAction *_currentAction;
    UIAXElement *_previousAXElement;
    NSArray *_pendingTapExpression;
    NSArray *_pendingDragExpressions;
    id <UIARecorderDelegate> _delegate;
    double _lastActionTime;
    unsigned long long _tapCount;
    NSMutableString *_keystrokes;
    NSTimer *_keystrokeFlushTimer;
    NSTimer *_expressionFlushTimer;
    double _releaseTimeForMostRecentEvent;
}

+ (id)defaultRecorder;
@property double releaseTimeForMostRecentEvent; // @synthesize releaseTimeForMostRecentEvent=_releaseTimeForMostRecentEvent;
@property(readonly) NSMutableString *keystrokes; // @synthesize keystrokes=_keystrokes;
@property unsigned long long tapCount; // @synthesize tapCount=_tapCount;
@property double lastActionTime; // @synthesize lastActionTime=_lastActionTime;
@property id <UIARecorderDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(retain) NSArray *pendingDragExpressions; // @synthesize pendingDragExpressions=_pendingDragExpressions;
@property(retain) NSArray *pendingTapExpression; // @synthesize pendingTapExpression=_pendingTapExpression;
@property(retain) UIAXElement *previousAXElement; // @synthesize previousAXElement=_previousAXElement;
@property(retain) UIARecorderAction *currentAction; // @synthesize currentAction=_currentAction;
@property(retain) UIATarget *uiaTarget; // @synthesize uiaTarget=_uiaTarget;
- (void)flushKeystrokes:(id)arg1;
- (void)flushDragExpressions:(id)arg1;
- (void)flushTapExpression:(id)arg1;
- (void)markNewActionAndLog:(_Bool)arg1;
- (void)handleAXEventRepresentation:(id)arg1;
- (void)_handEnded:(id)arg1;
- (id)_scriptingStringForOffsetWithScreenPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (id)_scriptingStringForPoint:(struct CGPoint)arg1;
- (void)_handStarted:(id)arg1;
- (void)_releaseEvents;
- (void)handleOrientationChange;
- (void)handleAlert;
- (void)postMutlitouchGestureDetected;
- (void)postStaleEventMessage;
- (void)postElementNotFoundAtPoint:(struct CGPoint)arg1 description:(id)arg2;
- (void)postRecordedExpression:(id)arg1;
- (void)stop;
- (void)start;
@property(retain) NSTimer *expressionFlushTimer; // @synthesize expressionFlushTimer=_expressionFlushTimer;
@property(retain) NSTimer *keystrokeFlushTimer; // @synthesize keystrokeFlushTimer=_keystrokeFlushTimer;
- (void)dealloc;
- (id)init;

@end

