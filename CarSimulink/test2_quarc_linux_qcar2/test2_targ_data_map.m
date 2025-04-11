    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 6;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (test2_P)
        ;%
            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% test2_P.HILRead_analog_channels
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% test2_P.HILRead_encoder_channels
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% test2_P.HILRead_other_channels
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 3;

                    ;% test2_P.HILWrite_other_channels
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 64;
            section.data(64)  = dumData; %prealloc

                    ;% test2_P.Constant10_Value
                    section.data(1).logicalSrcIdx = 4;
                    section.data(1).dtTransOffset = 0;

                    ;% test2_P.Constant9_Value
                    section.data(2).logicalSrcIdx = 5;
                    section.data(2).dtTransOffset = 1;

                    ;% test2_P.Constant_Value
                    section.data(3).logicalSrcIdx = 6;
                    section.data(3).dtTransOffset = 2;

                    ;% test2_P.HILInitialize_OOTerminate
                    section.data(4).logicalSrcIdx = 7;
                    section.data(4).dtTransOffset = 3;

                    ;% test2_P.HILInitialize_OOExit
                    section.data(5).logicalSrcIdx = 8;
                    section.data(5).dtTransOffset = 4;

                    ;% test2_P.HILInitialize_OOStart
                    section.data(6).logicalSrcIdx = 9;
                    section.data(6).dtTransOffset = 5;

                    ;% test2_P.HILInitialize_OOEnter
                    section.data(7).logicalSrcIdx = 10;
                    section.data(7).dtTransOffset = 6;

                    ;% test2_P.HILInitialize_POFinal
                    section.data(8).logicalSrcIdx = 11;
                    section.data(8).dtTransOffset = 7;

                    ;% test2_P.HILInitialize_OOFinal
                    section.data(9).logicalSrcIdx = 12;
                    section.data(9).dtTransOffset = 8;

                    ;% test2_P.HILInitialize_AIHigh
                    section.data(10).logicalSrcIdx = 13;
                    section.data(10).dtTransOffset = 9;

                    ;% test2_P.HILInitialize_AILow
                    section.data(11).logicalSrcIdx = 14;
                    section.data(11).dtTransOffset = 10;

                    ;% test2_P.HILInitialize_EIFrequency
                    section.data(12).logicalSrcIdx = 15;
                    section.data(12).dtTransOffset = 11;

                    ;% test2_P.HILInitialize_POFrequency
                    section.data(13).logicalSrcIdx = 16;
                    section.data(13).dtTransOffset = 12;

                    ;% test2_P.HILInitialize_POInitial
                    section.data(14).logicalSrcIdx = 17;
                    section.data(14).dtTransOffset = 13;

                    ;% test2_P.HILInitialize_POWatchdog
                    section.data(15).logicalSrcIdx = 18;
                    section.data(15).dtTransOffset = 14;

                    ;% test2_P.HILInitialize_OOInitial
                    section.data(16).logicalSrcIdx = 19;
                    section.data(16).dtTransOffset = 15;

                    ;% test2_P.HILInitialize_OOWatchdog
                    section.data(17).logicalSrcIdx = 20;
                    section.data(17).dtTransOffset = 16;

                    ;% test2_P.Constant2_Value
                    section.data(18).logicalSrcIdx = 21;
                    section.data(18).dtTransOffset = 17;

                    ;% test2_P.Integrator2_IC
                    section.data(19).logicalSrcIdx = 22;
                    section.data(19).dtTransOffset = 18;

                    ;% test2_P.Constant8_Value
                    section.data(20).logicalSrcIdx = 23;
                    section.data(20).dtTransOffset = 19;

                    ;% test2_P.Integrator2_IC_l
                    section.data(21).logicalSrcIdx = 24;
                    section.data(21).dtTransOffset = 20;

                    ;% test2_P.Constant1_Value
                    section.data(22).logicalSrcIdx = 25;
                    section.data(22).dtTransOffset = 21;

                    ;% test2_P.Constant3_Value
                    section.data(23).logicalSrcIdx = 26;
                    section.data(23).dtTransOffset = 22;

                    ;% test2_P.Constant4_Value
                    section.data(24).logicalSrcIdx = 27;
                    section.data(24).dtTransOffset = 23;

                    ;% test2_P.Constant5_Value
                    section.data(25).logicalSrcIdx = 28;
                    section.data(25).dtTransOffset = 24;

                    ;% test2_P.Constant6_Value
                    section.data(26).logicalSrcIdx = 29;
                    section.data(26).dtTransOffset = 25;

                    ;% test2_P.Constant7_Value
                    section.data(27).logicalSrcIdx = 30;
                    section.data(27).dtTransOffset = 26;

                    ;% test2_P.Gain1_Gain
                    section.data(28).logicalSrcIdx = 31;
                    section.data(28).dtTransOffset = 27;

                    ;% test2_P.Gain4_Gain
                    section.data(29).logicalSrcIdx = 32;
                    section.data(29).dtTransOffset = 28;

                    ;% test2_P.Gain2_Gain
                    section.data(30).logicalSrcIdx = 33;
                    section.data(30).dtTransOffset = 29;

                    ;% test2_P.Gain3_Gain
                    section.data(31).logicalSrcIdx = 34;
                    section.data(31).dtTransOffset = 30;

                    ;% test2_P.Constant_Value_h
                    section.data(32).logicalSrcIdx = 35;
                    section.data(32).dtTransOffset = 31;

                    ;% test2_P.Unwrap224_Modulus
                    section.data(33).logicalSrcIdx = 36;
                    section.data(33).dtTransOffset = 32;

                    ;% test2_P.Constant_Value_m
                    section.data(34).logicalSrcIdx = 37;
                    section.data(34).dtTransOffset = 33;

                    ;% test2_P.Integrator2_IC_i
                    section.data(35).logicalSrcIdx = 38;
                    section.data(35).dtTransOffset = 34;

                    ;% test2_P.Constant_Value_a
                    section.data(36).logicalSrcIdx = 39;
                    section.data(36).dtTransOffset = 35;

                    ;% test2_P.Integrator2_IC_i4
                    section.data(37).logicalSrcIdx = 40;
                    section.data(37).dtTransOffset = 36;

                    ;% test2_P.Constant_Value_e
                    section.data(38).logicalSrcIdx = 41;
                    section.data(38).dtTransOffset = 37;

                    ;% test2_P.Unwrap21_Modulus
                    section.data(39).logicalSrcIdx = 42;
                    section.data(39).dtTransOffset = 38;

                    ;% test2_P.SineWave1_Amp
                    section.data(40).logicalSrcIdx = 43;
                    section.data(40).dtTransOffset = 39;

                    ;% test2_P.SineWave1_Bias
                    section.data(41).logicalSrcIdx = 44;
                    section.data(41).dtTransOffset = 40;

                    ;% test2_P.SineWave1_Freq
                    section.data(42).logicalSrcIdx = 45;
                    section.data(42).dtTransOffset = 41;

                    ;% test2_P.SineWave1_Phase
                    section.data(43).logicalSrcIdx = 46;
                    section.data(43).dtTransOffset = 42;

                    ;% test2_P.Constant_Value_m2
                    section.data(44).logicalSrcIdx = 47;
                    section.data(44).dtTransOffset = 43;

                    ;% test2_P.directionconvention_Gain
                    section.data(45).logicalSrcIdx = 48;
                    section.data(45).dtTransOffset = 44;

                    ;% test2_P.commandsaturation_UpperSat
                    section.data(46).logicalSrcIdx = 49;
                    section.data(46).dtTransOffset = 45;

                    ;% test2_P.commandsaturation_LowerSat
                    section.data(47).logicalSrcIdx = 50;
                    section.data(47).dtTransOffset = 46;

                    ;% test2_P.SineWave_Amp
                    section.data(48).logicalSrcIdx = 51;
                    section.data(48).dtTransOffset = 47;

                    ;% test2_P.SineWave_Bias
                    section.data(49).logicalSrcIdx = 52;
                    section.data(49).dtTransOffset = 48;

                    ;% test2_P.SineWave_Freq
                    section.data(50).logicalSrcIdx = 53;
                    section.data(50).dtTransOffset = 49;

                    ;% test2_P.SineWave_Phase
                    section.data(51).logicalSrcIdx = 54;
                    section.data(51).dtTransOffset = 50;

                    ;% test2_P.Gain_Gain
                    section.data(52).logicalSrcIdx = 55;
                    section.data(52).dtTransOffset = 51;

                    ;% test2_P.SteeringBias_Bias
                    section.data(53).logicalSrcIdx = 56;
                    section.data(53).dtTransOffset = 52;

                    ;% test2_P.Constant11_Value
                    section.data(54).logicalSrcIdx = 57;
                    section.data(54).dtTransOffset = 53;

                    ;% test2_P.commandsaturation_UpperSat_l
                    section.data(55).logicalSrcIdx = 58;
                    section.data(55).dtTransOffset = 54;

                    ;% test2_P.commandsaturation_LowerSat_i
                    section.data(56).logicalSrcIdx = 59;
                    section.data(56).dtTransOffset = 55;

                    ;% test2_P.Kffms_Gain
                    section.data(57).logicalSrcIdx = 60;
                    section.data(57).dtTransOffset = 56;

                    ;% test2_P.Kpms_Gain
                    section.data(58).logicalSrcIdx = 61;
                    section.data(58).dtTransOffset = 57;

                    ;% test2_P.Integrator1_IC
                    section.data(59).logicalSrcIdx = 62;
                    section.data(59).dtTransOffset = 58;

                    ;% test2_P.Integrator1_UpperSat
                    section.data(60).logicalSrcIdx = 63;
                    section.data(60).dtTransOffset = 59;

                    ;% test2_P.Integrator1_LowerSat
                    section.data(61).logicalSrcIdx = 64;
                    section.data(61).dtTransOffset = 60;

                    ;% test2_P.commandsaturation1_UpperSat
                    section.data(62).logicalSrcIdx = 65;
                    section.data(62).dtTransOffset = 61;

                    ;% test2_P.commandsaturation1_LowerSat
                    section.data(63).logicalSrcIdx = 66;
                    section.data(63).dtTransOffset = 62;

                    ;% test2_P.Kim_Gain
                    section.data(64).logicalSrcIdx = 67;
                    section.data(64).dtTransOffset = 63;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% test2_P.HILInitialize_DOWatchdog
                    section.data(1).logicalSrcIdx = 68;
                    section.data(1).dtTransOffset = 0;

                    ;% test2_P.HILInitialize_EIInitial
                    section.data(2).logicalSrcIdx = 69;
                    section.data(2).dtTransOffset = 1;

                    ;% test2_P.HILInitialize_POModes
                    section.data(3).logicalSrcIdx = 70;
                    section.data(3).dtTransOffset = 2;

                    ;% test2_P.HILInitialize_POConfiguration
                    section.data(4).logicalSrcIdx = 71;
                    section.data(4).dtTransOffset = 3;

                    ;% test2_P.HILInitialize_POAlignment
                    section.data(5).logicalSrcIdx = 72;
                    section.data(5).dtTransOffset = 4;

                    ;% test2_P.HILInitialize_POPolarity
                    section.data(6).logicalSrcIdx = 73;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% test2_P.HILInitialize_AIChannels
                    section.data(1).logicalSrcIdx = 74;
                    section.data(1).dtTransOffset = 0;

                    ;% test2_P.HILInitialize_DIChannels
                    section.data(2).logicalSrcIdx = 75;
                    section.data(2).dtTransOffset = 5;

                    ;% test2_P.HILInitialize_DOChannels
                    section.data(3).logicalSrcIdx = 76;
                    section.data(3).dtTransOffset = 20;

                    ;% test2_P.HILInitialize_EIChannels
                    section.data(4).logicalSrcIdx = 77;
                    section.data(4).dtTransOffset = 36;

                    ;% test2_P.HILInitialize_EIQuadrature
                    section.data(5).logicalSrcIdx = 78;
                    section.data(5).dtTransOffset = 39;

                    ;% test2_P.HILInitialize_POChannels
                    section.data(6).logicalSrcIdx = 79;
                    section.data(6).dtTransOffset = 40;

                    ;% test2_P.HILInitialize_OOChannels
                    section.data(7).logicalSrcIdx = 80;
                    section.data(7).dtTransOffset = 42;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 37;
            section.data(37)  = dumData; %prealloc

                    ;% test2_P.HILInitialize_Active
                    section.data(1).logicalSrcIdx = 81;
                    section.data(1).dtTransOffset = 0;

                    ;% test2_P.HILInitialize_AOTerminate
                    section.data(2).logicalSrcIdx = 82;
                    section.data(2).dtTransOffset = 1;

                    ;% test2_P.HILInitialize_AOExit
                    section.data(3).logicalSrcIdx = 83;
                    section.data(3).dtTransOffset = 2;

                    ;% test2_P.HILInitialize_DOTerminate
                    section.data(4).logicalSrcIdx = 84;
                    section.data(4).dtTransOffset = 3;

                    ;% test2_P.HILInitialize_DOExit
                    section.data(5).logicalSrcIdx = 85;
                    section.data(5).dtTransOffset = 4;

                    ;% test2_P.HILInitialize_POTerminate
                    section.data(6).logicalSrcIdx = 86;
                    section.data(6).dtTransOffset = 5;

                    ;% test2_P.HILInitialize_POExit
                    section.data(7).logicalSrcIdx = 87;
                    section.data(7).dtTransOffset = 6;

                    ;% test2_P.HILInitialize_CKPStart
                    section.data(8).logicalSrcIdx = 88;
                    section.data(8).dtTransOffset = 7;

                    ;% test2_P.HILInitialize_CKPEnter
                    section.data(9).logicalSrcIdx = 89;
                    section.data(9).dtTransOffset = 8;

                    ;% test2_P.HILInitialize_CKStart
                    section.data(10).logicalSrcIdx = 90;
                    section.data(10).dtTransOffset = 9;

                    ;% test2_P.HILInitialize_CKEnter
                    section.data(11).logicalSrcIdx = 91;
                    section.data(11).dtTransOffset = 10;

                    ;% test2_P.HILInitialize_AIPStart
                    section.data(12).logicalSrcIdx = 92;
                    section.data(12).dtTransOffset = 11;

                    ;% test2_P.HILInitialize_AIPEnter
                    section.data(13).logicalSrcIdx = 93;
                    section.data(13).dtTransOffset = 12;

                    ;% test2_P.HILInitialize_AOPStart
                    section.data(14).logicalSrcIdx = 94;
                    section.data(14).dtTransOffset = 13;

                    ;% test2_P.HILInitialize_AOPEnter
                    section.data(15).logicalSrcIdx = 95;
                    section.data(15).dtTransOffset = 14;

                    ;% test2_P.HILInitialize_AOStart
                    section.data(16).logicalSrcIdx = 96;
                    section.data(16).dtTransOffset = 15;

                    ;% test2_P.HILInitialize_AOEnter
                    section.data(17).logicalSrcIdx = 97;
                    section.data(17).dtTransOffset = 16;

                    ;% test2_P.HILInitialize_AOReset
                    section.data(18).logicalSrcIdx = 98;
                    section.data(18).dtTransOffset = 17;

                    ;% test2_P.HILInitialize_DOPStart
                    section.data(19).logicalSrcIdx = 99;
                    section.data(19).dtTransOffset = 18;

                    ;% test2_P.HILInitialize_DOPEnter
                    section.data(20).logicalSrcIdx = 100;
                    section.data(20).dtTransOffset = 19;

                    ;% test2_P.HILInitialize_DOStart
                    section.data(21).logicalSrcIdx = 101;
                    section.data(21).dtTransOffset = 20;

                    ;% test2_P.HILInitialize_DOEnter
                    section.data(22).logicalSrcIdx = 102;
                    section.data(22).dtTransOffset = 21;

                    ;% test2_P.HILInitialize_DOReset
                    section.data(23).logicalSrcIdx = 103;
                    section.data(23).dtTransOffset = 22;

                    ;% test2_P.HILInitialize_EIPStart
                    section.data(24).logicalSrcIdx = 104;
                    section.data(24).dtTransOffset = 23;

                    ;% test2_P.HILInitialize_EIPEnter
                    section.data(25).logicalSrcIdx = 105;
                    section.data(25).dtTransOffset = 24;

                    ;% test2_P.HILInitialize_EIStart
                    section.data(26).logicalSrcIdx = 106;
                    section.data(26).dtTransOffset = 25;

                    ;% test2_P.HILInitialize_EIEnter
                    section.data(27).logicalSrcIdx = 107;
                    section.data(27).dtTransOffset = 26;

                    ;% test2_P.HILInitialize_POPStart
                    section.data(28).logicalSrcIdx = 108;
                    section.data(28).dtTransOffset = 27;

                    ;% test2_P.HILInitialize_POPEnter
                    section.data(29).logicalSrcIdx = 109;
                    section.data(29).dtTransOffset = 28;

                    ;% test2_P.HILInitialize_POStart
                    section.data(30).logicalSrcIdx = 110;
                    section.data(30).dtTransOffset = 29;

                    ;% test2_P.HILInitialize_POEnter
                    section.data(31).logicalSrcIdx = 111;
                    section.data(31).dtTransOffset = 30;

                    ;% test2_P.HILInitialize_POReset
                    section.data(32).logicalSrcIdx = 112;
                    section.data(32).dtTransOffset = 31;

                    ;% test2_P.HILInitialize_OOReset
                    section.data(33).logicalSrcIdx = 113;
                    section.data(33).dtTransOffset = 32;

                    ;% test2_P.HILInitialize_DOFinal
                    section.data(34).logicalSrcIdx = 114;
                    section.data(34).dtTransOffset = 33;

                    ;% test2_P.HILInitialize_DOInitial
                    section.data(35).logicalSrcIdx = 115;
                    section.data(35).dtTransOffset = 34;

                    ;% test2_P.HILRead_Active
                    section.data(36).logicalSrcIdx = 116;
                    section.data(36).dtTransOffset = 35;

                    ;% test2_P.HILWrite_Active
                    section.data(37).logicalSrcIdx = 117;
                    section.data(37).dtTransOffset = 36;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% test2_P.uArm0Disarm1_CurrentSetting
                    section.data(1).logicalSrcIdx = 118;
                    section.data(1).dtTransOffset = 0;

                    ;% test2_P.uArm0Disarm2_CurrentSetting
                    section.data(2).logicalSrcIdx = 119;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (test2_B)
        ;%
            section.nData     = 24;
            section.data(24)  = dumData; %prealloc

                    ;% test2_B.Product1
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% test2_B.Product1_p
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% test2_B.motorcurrent
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% test2_B.motorencoder
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 4;

                    ;% test2_B.motorvelocity
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 5;

                    ;% test2_B.Integrator1
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 6;

                    ;% test2_B.Integrator1_c
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 7;

                    ;% test2_B.Gain3
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 8;

                    ;% test2_B.Unwrap224
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 9;

                    ;% test2_B.Product
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 10;

                    ;% test2_B.Product_b
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 11;

                    ;% test2_B.Product1_c
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 12;

                    ;% test2_B.Product_a
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 13;

                    ;% test2_B.Product1_n
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 14;

                    ;% test2_B.Unwrap21
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 15;

                    ;% test2_B.Product_bv
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 16;

                    ;% test2_B.commandsaturation
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 17;

                    ;% test2_B.SteeringBias
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 18;

                    ;% test2_B.switch_l
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 19;

                    ;% test2_B.desired
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 20;

                    ;% test2_B.Kffms
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 21;

                    ;% test2_B.measured
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 22;

                    ;% test2_B.pwmdutycycle
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 23;

                    ;% test2_B.Kim
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 24;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% test2_B.Compare
                    section.data(1).logicalSrcIdx = 24;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 7;
        sectIdxOffset = 2;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (test2_DW)
        ;%
            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% test2_DW.HILInitialize_AIMinimums
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% test2_DW.HILInitialize_AIMaximums
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 5;

                    ;% test2_DW.HILInitialize_FilterFrequency
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 10;

                    ;% test2_DW.HILInitialize_POSortedFreqs
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 13;

                    ;% test2_DW.HILInitialize_POValues
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 15;

                    ;% test2_DW.HILInitialize_OOValues
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 17;

                    ;% test2_DW.Unwrap224_PreviousInput
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 19;

                    ;% test2_DW.Unwrap224_Revolutions
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 20;

                    ;% test2_DW.Unwrap21_PreviousInput
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 21;

                    ;% test2_DW.Unwrap21_Revolutions
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 22;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% test2_DW.HILInitialize_Card
                    section.data(1).logicalSrcIdx = 10;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% test2_DW.HILRead_PWORK
                    section.data(1).logicalSrcIdx = 11;
                    section.data(1).dtTransOffset = 0;

                    ;% test2_DW.Scope_PWORK.LoggedData
                    section.data(2).logicalSrcIdx = 12;
                    section.data(2).dtTransOffset = 1;

                    ;% test2_DW.HILWrite_PWORK
                    section.data(3).logicalSrcIdx = 13;
                    section.data(3).dtTransOffset = 3;

                    ;% test2_DW.Scope_PWORK_c.LoggedData
                    section.data(4).logicalSrcIdx = 14;
                    section.data(4).dtTransOffset = 4;

                    ;% test2_DW.Scope1_PWORK.LoggedData
                    section.data(5).logicalSrcIdx = 15;
                    section.data(5).dtTransOffset = 5;

                    ;% test2_DW.Scope_PWORK_m.LoggedData
                    section.data(6).logicalSrcIdx = 16;
                    section.data(6).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% test2_DW.HILInitialize_DOStates
                    section.data(1).logicalSrcIdx = 17;
                    section.data(1).dtTransOffset = 0;

                    ;% test2_DW.HILInitialize_QuadratureModes
                    section.data(2).logicalSrcIdx = 18;
                    section.data(2).dtTransOffset = 16;

                    ;% test2_DW.HILInitialize_InitialEICounts
                    section.data(3).logicalSrcIdx = 19;
                    section.data(3).dtTransOffset = 19;

                    ;% test2_DW.HILInitialize_POModeValues
                    section.data(4).logicalSrcIdx = 20;
                    section.data(4).dtTransOffset = 22;

                    ;% test2_DW.HILInitialize_POAlignValues
                    section.data(5).logicalSrcIdx = 21;
                    section.data(5).dtTransOffset = 24;

                    ;% test2_DW.HILInitialize_POPolarityVals
                    section.data(6).logicalSrcIdx = 22;
                    section.data(6).dtTransOffset = 26;

                    ;% test2_DW.HILRead_EncoderBuffer
                    section.data(7).logicalSrcIdx = 23;
                    section.data(7).dtTransOffset = 28;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% test2_DW.HILInitialize_POSortedChans
                    section.data(1).logicalSrcIdx = 24;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% test2_DW.Integrator1_IWORK
                    section.data(1).logicalSrcIdx = 25;
                    section.data(1).dtTransOffset = 0;

                    ;% test2_DW.Integrator1_IWORK_a
                    section.data(2).logicalSrcIdx = 26;
                    section.data(2).dtTransOffset = 1;

                    ;% test2_DW.Integrator1_IWORK_g
                    section.data(3).logicalSrcIdx = 27;
                    section.data(3).dtTransOffset = 2;

                    ;% test2_DW.Integrator1_IWORK_l
                    section.data(4).logicalSrcIdx = 28;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% test2_DW.HILInitialize_DOBits
                    section.data(1).logicalSrcIdx = 29;
                    section.data(1).dtTransOffset = 0;

                    ;% test2_DW.Unwrap224_FirstSample
                    section.data(2).logicalSrcIdx = 30;
                    section.data(2).dtTransOffset = 16;

                    ;% test2_DW.Unwrap21_FirstSample
                    section.data(3).logicalSrcIdx = 31;
                    section.data(3).dtTransOffset = 17;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 2274986473;
    targMap.checksum1 = 2653449047;
    targMap.checksum2 = 2190051454;
    targMap.checksum3 = 3318896719;

