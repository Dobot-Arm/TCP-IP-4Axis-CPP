/********************************************************************************
** Form generated from reading UI file 'Form.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditIP;
    QLabel *label_2;
    QLineEdit *lineEditDashPort;
    QLabel *label_3;
    QLineEdit *lineEditMovePort;
    QLabel *label_4;
    QLineEdit *lineEditFeedbackPort;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnConnect;
    QGroupBox *boxDashboard;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnEnable;
    QPushButton *btnReset;
    QPushButton *clearError;
    QLabel *label_5;
    QSpinBox *spinBox;
    QLabel *label_6;
    QPushButton *btnConfirmSpeed;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnEnableAgain;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *editIndex;
    QLabel *label_9;
    QComboBox *comboBoxStatus;
    QPushButton *btnConfirmDO;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *boxMoveFunction;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_17;
    QLineEdit *lineEditX;
    QLabel *label_25;
    QLineEdit *lineEditY;
    QLabel *label_27;
    QLineEdit *lineEditZ;
    QLabel *lblR;
    QLineEdit *lineEditRX;
    QPushButton *btnMovJ;
    QPushButton *btnMovL;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_34;
    QLineEdit *lineEditJ1;
    QLabel *label_26;
    QLineEdit *lineEditJ2;
    QLabel *label_18;
    QLineEdit *lineEditJ3;
    QLabel *label_24;
    QLineEdit *lineEditJ4;
    QPushButton *btnJointMovJ;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *boxFeedback;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QLabel *labCurrentSpeedRatio;
    QLabel *labRobotMode;
    QGridLayout *gridLayout_5;
    QPushButton *btn6AxisJ3P;
    QDoubleSpinBox *dbBoxJ4;
    QLabel *label_49;
    QPushButton *btn6AxisXP;
    QDoubleSpinBox *dbBoxZ;
    QLabel *label_44;
    QPushButton *btn6AxisYM;
    QLabel *label_39;
    QLabel *label_43;
    QPushButton *btn6AxisJ1P;
    QPushButton *btn6AxisJ4P;
    QDoubleSpinBox *dbBoxJ1;
    QDoubleSpinBox *dbBoxJ3;
    QPushButton *btn6AxisJ1M;
    QDoubleSpinBox *dbBoxA;
    QDoubleSpinBox *dbBoxJ2;
    QLabel *label_40;
    QPushButton *btn6AxisJ3M;
    QDoubleSpinBox *dbBoxY;
    QPushButton *btn6AxisZP;
    QPushButton *btn6AxisJ2M;
    QPushButton *btn6AxisJ2P;
    QLabel *label_41;
    QDoubleSpinBox *dbBoxX;
    QPushButton *btn6AxisZM;
    QPushButton *btn6AxisYP;
    QPushButton *btn6AxisRXP;
    QPushButton *btn6AxisJ4M;
    QPushButton *btn6AxisRXM;
    QPushButton *btn6AxisXM;
    QLabel *lblR_3;
    QLabel *label_42;
    QLabel *labDI;
    QLabel *labDO;
    QSpacerItem *verticalSpacer;
    QGroupBox *boxErrorInfo;
    QGridLayout *gridLayout_7;
    QTextEdit *textEditErrorInfo;
    QGroupBox *boxLog;
    QGridLayout *gridLayout_8;
    QTextEdit *textEditLog;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(1183, 707);
        verticalLayout_6 = new QVBoxLayout(Form);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        lineEditIP = new QLineEdit(groupBox);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));

        horizontalLayout->addWidget(lineEditIP);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_2);

        lineEditDashPort = new QLineEdit(groupBox);
        lineEditDashPort->setObjectName(QString::fromUtf8("lineEditDashPort"));

        horizontalLayout->addWidget(lineEditDashPort);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_3);

        lineEditMovePort = new QLineEdit(groupBox);
        lineEditMovePort->setObjectName(QString::fromUtf8("lineEditMovePort"));

        horizontalLayout->addWidget(lineEditMovePort);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_4);

        lineEditFeedbackPort = new QLineEdit(groupBox);
        lineEditFeedbackPort->setObjectName(QString::fromUtf8("lineEditFeedbackPort"));

        horizontalLayout->addWidget(lineEditFeedbackPort);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(833, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnConnect = new QPushButton(groupBox);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        horizontalLayout_2->addWidget(btnConnect);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox);

        boxDashboard = new QGroupBox(Form);
        boxDashboard->setObjectName(QString::fromUtf8("boxDashboard"));
        gridLayout_2 = new QGridLayout(boxDashboard);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnEnable = new QPushButton(boxDashboard);
        btnEnable->setObjectName(QString::fromUtf8("btnEnable"));

        horizontalLayout_3->addWidget(btnEnable);

        btnReset = new QPushButton(boxDashboard);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));

        horizontalLayout_3->addWidget(btnReset);

        clearError = new QPushButton(boxDashboard);
        clearError->setObjectName(QString::fromUtf8("clearError"));

        horizontalLayout_3->addWidget(clearError);

        label_5 = new QLabel(boxDashboard);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_5);

        spinBox = new QSpinBox(boxDashboard);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(1);
        spinBox->setMaximum(100);
        spinBox->setValue(10);

        horizontalLayout_3->addWidget(spinBox);

        label_6 = new QLabel(boxDashboard);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_6);

        btnConfirmSpeed = new QPushButton(boxDashboard);
        btnConfirmSpeed->setObjectName(QString::fromUtf8("btnConfirmSpeed"));

        horizontalLayout_3->addWidget(btnConfirmSpeed);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnEnableAgain = new QPushButton(boxDashboard);
        btnEnableAgain->setObjectName(QString::fromUtf8("btnEnableAgain"));

        horizontalLayout_3->addWidget(btnEnableAgain);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(boxDashboard);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_7);

        label_8 = new QLabel(boxDashboard);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_8);

        editIndex = new QLineEdit(boxDashboard);
        editIndex->setObjectName(QString::fromUtf8("editIndex"));
        sizePolicy1.setHeightForWidth(editIndex->sizePolicy().hasHeightForWidth());
        editIndex->setSizePolicy(sizePolicy1);
        editIndex->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_4->addWidget(editIndex);

        label_9 = new QLabel(boxDashboard);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_9);

        comboBoxStatus = new QComboBox(boxDashboard);
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->setObjectName(QString::fromUtf8("comboBoxStatus"));
        sizePolicy.setHeightForWidth(comboBoxStatus->sizePolicy().hasHeightForWidth());
        comboBoxStatus->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(comboBoxStatus);

        btnConfirmDO = new QPushButton(boxDashboard);
        btnConfirmDO->setObjectName(QString::fromUtf8("btnConfirmDO"));
        sizePolicy1.setHeightForWidth(btnConfirmDO->sizePolicy().hasHeightForWidth());
        btnConfirmDO->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(btnConfirmDO);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout_5->addWidget(boxDashboard);

        boxMoveFunction = new QGroupBox(Form);
        boxMoveFunction->setObjectName(QString::fromUtf8("boxMoveFunction"));
        gridLayout_3 = new QGridLayout(boxMoveFunction);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_17 = new QLabel(boxMoveFunction);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        QFont font;
        font.setPointSize(11);
        label_17->setFont(font);
        label_17->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_17);

        lineEditX = new QLineEdit(boxMoveFunction);
        lineEditX->setObjectName(QString::fromUtf8("lineEditX"));

        horizontalLayout_5->addWidget(lineEditX);

        label_25 = new QLabel(boxMoveFunction);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font);
        label_25->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_25);

        lineEditY = new QLineEdit(boxMoveFunction);
        lineEditY->setObjectName(QString::fromUtf8("lineEditY"));

        horizontalLayout_5->addWidget(lineEditY);

        label_27 = new QLabel(boxMoveFunction);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFont(font);
        label_27->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_27);

        lineEditZ = new QLineEdit(boxMoveFunction);
        lineEditZ->setObjectName(QString::fromUtf8("lineEditZ"));

        horizontalLayout_5->addWidget(lineEditZ);

        lblR = new QLabel(boxMoveFunction);
        lblR->setObjectName(QString::fromUtf8("lblR"));
        lblR->setFont(font);
        lblR->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lblR);

        lineEditRX = new QLineEdit(boxMoveFunction);
        lineEditRX->setObjectName(QString::fromUtf8("lineEditRX"));

        horizontalLayout_5->addWidget(lineEditRX);

        btnMovJ = new QPushButton(boxMoveFunction);
        btnMovJ->setObjectName(QString::fromUtf8("btnMovJ"));

        horizontalLayout_5->addWidget(btnMovJ);

        btnMovL = new QPushButton(boxMoveFunction);
        btnMovL->setObjectName(QString::fromUtf8("btnMovL"));

        horizontalLayout_5->addWidget(btnMovL);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_34 = new QLabel(boxMoveFunction);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setFont(font);
        label_34->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_34);

        lineEditJ1 = new QLineEdit(boxMoveFunction);
        lineEditJ1->setObjectName(QString::fromUtf8("lineEditJ1"));

        horizontalLayout_6->addWidget(lineEditJ1);

        label_26 = new QLabel(boxMoveFunction);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFont(font);
        label_26->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_26);

        lineEditJ2 = new QLineEdit(boxMoveFunction);
        lineEditJ2->setObjectName(QString::fromUtf8("lineEditJ2"));

        horizontalLayout_6->addWidget(lineEditJ2);

        label_18 = new QLabel(boxMoveFunction);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);
        label_18->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_18);

        lineEditJ3 = new QLineEdit(boxMoveFunction);
        lineEditJ3->setObjectName(QString::fromUtf8("lineEditJ3"));

        horizontalLayout_6->addWidget(lineEditJ3);

        label_24 = new QLabel(boxMoveFunction);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font);
        label_24->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_24);

        lineEditJ4 = new QLineEdit(boxMoveFunction);
        lineEditJ4->setObjectName(QString::fromUtf8("lineEditJ4"));

        horizontalLayout_6->addWidget(lineEditJ4);

        btnJointMovJ = new QPushButton(boxMoveFunction);
        btnJointMovJ->setObjectName(QString::fromUtf8("btnJointMovJ"));

        horizontalLayout_6->addWidget(btnJointMovJ);


        verticalLayout_3->addLayout(horizontalLayout_6);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);


        verticalLayout_5->addWidget(boxMoveFunction);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        boxFeedback = new QGroupBox(Form);
        boxFeedback->setObjectName(QString::fromUtf8("boxFeedback"));
        gridLayout_4 = new QGridLayout(boxFeedback);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        labCurrentSpeedRatio = new QLabel(boxFeedback);
        labCurrentSpeedRatio->setObjectName(QString::fromUtf8("labCurrentSpeedRatio"));
        sizePolicy.setHeightForWidth(labCurrentSpeedRatio->sizePolicy().hasHeightForWidth());
        labCurrentSpeedRatio->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(labCurrentSpeedRatio);

        labRobotMode = new QLabel(boxFeedback);
        labRobotMode->setObjectName(QString::fromUtf8("labRobotMode"));
        sizePolicy.setHeightForWidth(labRobotMode->sizePolicy().hasHeightForWidth());
        labRobotMode->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(labRobotMode);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        btn6AxisJ3P = new QPushButton(boxFeedback);
        btn6AxisJ3P->setObjectName(QString::fromUtf8("btn6AxisJ3P"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn6AxisJ3P->sizePolicy().hasHeightForWidth());
        btn6AxisJ3P->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(btn6AxisJ3P, 2, 3, 1, 1);

        dbBoxJ4 = new QDoubleSpinBox(boxFeedback);
        dbBoxJ4->setObjectName(QString::fromUtf8("dbBoxJ4"));
        QFont font1;
        font1.setPointSize(12);
        dbBoxJ4->setFont(font1);
        dbBoxJ4->setFocusPolicy(Qt::NoFocus);
        dbBoxJ4->setContextMenuPolicy(Qt::DefaultContextMenu);
        dbBoxJ4->setAlignment(Qt::AlignCenter);
        dbBoxJ4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dbBoxJ4->setDecimals(4);
        dbBoxJ4->setMinimum(-9999.000000000000000);
        dbBoxJ4->setMaximum(9999.999900000000707);
        dbBoxJ4->setSingleStep(0.000000000000000);

        gridLayout_5->addWidget(dbBoxJ4, 3, 2, 1, 1);

        label_49 = new QLabel(boxFeedback);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setFont(font);
        label_49->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_49, 1, 1, 1, 1);

        btn6AxisXP = new QPushButton(boxFeedback);
        btn6AxisXP->setObjectName(QString::fromUtf8("btn6AxisXP"));
        sizePolicy2.setHeightForWidth(btn6AxisXP->sizePolicy().hasHeightForWidth());
        btn6AxisXP->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(btn6AxisXP, 0, 7, 1, 1);

        dbBoxZ = new QDoubleSpinBox(boxFeedback);
        dbBoxZ->setObjectName(QString::fromUtf8("dbBoxZ"));
        dbBoxZ->setFont(font1);
        dbBoxZ->setFocusPolicy(Qt::NoFocus);
        dbBoxZ->setContextMenuPolicy(Qt::DefaultContextMenu);
        dbBoxZ->setAlignment(Qt::AlignCenter);
        dbBoxZ->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dbBoxZ->setDecimals(4);
        dbBoxZ->setMinimum(-9999.000000000000000);
        dbBoxZ->setMaximum(9999.999900000000707);
        dbBoxZ->setSingleStep(0.000000000000000);

        gridLayout_5->addWidget(dbBoxZ, 2, 6, 1, 1);

        label_44 = new QLabel(boxFeedback);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setFont(font);
        label_44->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_44, 3, 1, 1, 1);

        btn6AxisYM = new QPushButton(boxFeedback);
        btn6AxisYM->setObjectName(QString::fromUtf8("btn6AxisYM"));
        sizePolicy2.setHeightForWidth(btn6AxisYM->sizePolicy().hasHeightForWidth());
        btn6AxisYM->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(btn6AxisYM, 1, 4, 1, 1);

        label_39 = new QLabel(boxFeedback);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setFont(font);
        label_39->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_39, 2, 5, 1, 1);

        label_43 = new QLabel(boxFeedback);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setFont(font);
        label_43->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_43, 2, 1, 1, 1);

        btn6AxisJ1P = new QPushButton(boxFeedback);
        btn6AxisJ1P->setObjectName(QString::fromUtf8("btn6AxisJ1P"));
        sizePolicy2.setHeightForWidth(btn6AxisJ1P->sizePolicy().hasHeightForWidth());
        btn6AxisJ1P->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(btn6AxisJ1P, 0, 3, 1, 1);

        btn6AxisJ4P = new QPushButton(boxFeedback);
        btn6AxisJ4P->setObjectName(QString::fromUtf8("btn6AxisJ4P"));
        sizePolicy2.setHeightForWidth(btn6AxisJ4P->sizePolicy().hasHeightForWidth());
        btn6AxisJ4P->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(btn6AxisJ4P, 3, 3, 1, 1);

        dbBoxJ1 = new QDoubleSpinBox(boxFeedback);
        dbBoxJ1->setObjectName(QString::fromUtf8("dbBoxJ1"));
        dbBoxJ1->setFont(font1);
        dbBoxJ1->setFocusPolicy(Qt::NoFocus);
        dbBoxJ1->setContextMenuPolicy(Qt::DefaultContextMenu);
        dbBoxJ1->setAlignment(Qt::AlignCenter);
        dbBoxJ1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dbBoxJ1->setDecimals(4);
        dbBoxJ1->setMinimum(-9999.000000000000000);
        dbBoxJ1->setMaximum(9999.999900000000707);
        dbBoxJ1->setSingleStep(0.000000000000000);

        gridLayout_5->addWidget(dbBoxJ1, 0, 2, 1, 1);

        dbBoxJ3 = new QDoubleSpinBox(boxFeedback);
        dbBoxJ3->setObjectName(QString::fromUtf8("dbBoxJ3"));
        dbBoxJ3->setFont(font1);
        dbBoxJ3->setFocusPolicy(Qt::NoFocus);
        dbBoxJ3->setContextMenuPolicy(Qt::DefaultContextMenu);
        dbBoxJ3->setAlignment(Qt::AlignCenter);
        dbBoxJ3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dbBoxJ3->setDecimals(4);
        dbBoxJ3->setMinimum(-9999.000000000000000);
        dbBoxJ3->setMaximum(9999.999900000000707);
        dbBoxJ3->setSingleStep(0.000000000000000);

        gridLayout_5->addWidget(dbBoxJ3, 2, 2, 1, 1);

        btn6AxisJ1M = new QPushButton(boxFeedback);
        btn6AxisJ1M->setObjectName(QString::fromUtf8("btn6AxisJ1M"));
        sizePolicy2.setHeightForWidth(btn6AxisJ1M->sizePolicy().hasHeightForWidth());
        btn6AxisJ1M->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(btn6AxisJ1M, 0, 0, 1, 1);

        dbBoxA = new QDoubleSpinBox(boxFeedback);
        dbBoxA->setObjectName(QString::fromUtf8("dbBoxA"));
        dbBoxA->setFont(font1);
        dbBoxA->setFocusPolicy(Qt::NoFocus);
        dbBoxA->setContextMenuPolicy(Qt::DefaultContextMenu);
        dbBoxA->setAlignment(Qt::AlignCenter);
        dbBoxA->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dbBoxA->setDecimals(4);
        dbBoxA->setMinimum(-9999.000000000000000);
        dbBoxA->setMaximum(9999.999900000000707);
        dbBoxA->setSingleStep(0.000000000000000);

        gridLayout_5->addWidget(dbBoxA, 3, 6, 1, 1);

        dbBoxJ2 = new QDoubleSpinBox(boxFeedback);
        dbBoxJ2->setObjectName(QString::fromUtf8("dbBoxJ2"));
        dbBoxJ2->setFont(font1);
        dbBoxJ2->setFocusPolicy(Qt::NoFocus);
        dbBoxJ2->setContextMenuPolicy(Qt::DefaultContextMenu);
        dbBoxJ2->setAlignment(Qt::AlignCenter);
        dbBoxJ2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dbBoxJ2->setDecimals(4);
        dbBoxJ2->setMinimum(-9999.000000000000000);
        dbBoxJ2->setMaximum(9999.999900000000707);
        dbBoxJ2->setSingleStep(0.000000000000000);

        gridLayout_5->addWidget(dbBoxJ2, 1, 2, 1, 1);

        label_40 = new QLabel(boxFeedback);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setFont(font);
        label_40->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_40, 1, 5, 1, 1);

        btn6AxisJ3M = new QPushButton(boxFeedback);
        btn6AxisJ3M->setObjectName(QString::fromUtf8("btn6AxisJ3M"));
        sizePolicy2.setHeightForWidth(btn6AxisJ3M->sizePolicy().hasHeightForWidth());
        btn6AxisJ3M->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(btn6AxisJ3M, 2, 0, 1, 1);

        dbBoxY = new QDoubleSpinBox(boxFeedback);
        dbBoxY->setObjectName(QString::fromUtf8("dbBoxY"));
        dbBoxY->setFont(font1);
        dbBoxY->setFocusPolicy(Qt::NoFocus);
        dbBoxY->setContextMenuPolicy(Qt::DefaultContextMenu);
        dbBoxY->setAlignment(Qt::AlignCenter);
        dbBoxY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dbBoxY->setDecimals(4);
        dbBoxY->setMinimum(-9999.000000000000000);
        dbBoxY->setMaximum(9999.999900000000707);
        dbBoxY->setSingleStep(0.000000000000000);

        gridLayout_5->addWidget(dbBoxY, 1, 6, 1, 1);

        btn6AxisZP = new QPushButton(boxFeedback);
        btn6AxisZP->setObjectName(QString::fromUtf8("btn6AxisZP"));
        sizePolicy2.setHeightForWidth(btn6AxisZP->sizePolicy().hasHeightForWidth());
        btn6AxisZP->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(btn6AxisZP, 2, 7, 1, 1);

        btn6AxisJ2M = new QPushButton(boxFeedback);
        btn6AxisJ2M->setObjectName(QString::fromUtf8("btn6AxisJ2M"));
        sizePolicy2.setHeightForWidth(btn6AxisJ2M->sizePolicy().hasHeightForWidth());
        btn6AxisJ2M->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(btn6AxisJ2M, 1, 0, 1, 1);

        btn6AxisJ2P = new QPushButton(boxFeedback);
        btn6AxisJ2P->setObjectName(QString::fromUtf8("btn6AxisJ2P"));
        sizePolicy2.setHeightForWidth(btn6AxisJ2P->sizePolicy().hasHeightForWidth());
        btn6AxisJ2P->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(btn6AxisJ2P, 1, 3, 1, 1);

        label_41 = new QLabel(boxFeedback);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setFont(font);
        label_41->setScaledContents(false);
        label_41->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_41, 0, 1, 1, 1);

        dbBoxX = new QDoubleSpinBox(boxFeedback);
        dbBoxX->setObjectName(QString::fromUtf8("dbBoxX"));
        dbBoxX->setFont(font1);
        dbBoxX->setFocusPolicy(Qt::NoFocus);
        dbBoxX->setContextMenuPolicy(Qt::DefaultContextMenu);
        dbBoxX->setAlignment(Qt::AlignCenter);
        dbBoxX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dbBoxX->setDecimals(4);
        dbBoxX->setMinimum(-9999.000000000000000);
        dbBoxX->setMaximum(9999.999900000000707);
        dbBoxX->setSingleStep(0.000000000000000);

        gridLayout_5->addWidget(dbBoxX, 0, 6, 1, 1);

        btn6AxisZM = new QPushButton(boxFeedback);
        btn6AxisZM->setObjectName(QString::fromUtf8("btn6AxisZM"));
        sizePolicy2.setHeightForWidth(btn6AxisZM->sizePolicy().hasHeightForWidth());
        btn6AxisZM->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(btn6AxisZM, 2, 4, 1, 1);

        btn6AxisYP = new QPushButton(boxFeedback);
        btn6AxisYP->setObjectName(QString::fromUtf8("btn6AxisYP"));
        sizePolicy2.setHeightForWidth(btn6AxisYP->sizePolicy().hasHeightForWidth());
        btn6AxisYP->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(btn6AxisYP, 1, 7, 1, 1);

        btn6AxisRXP = new QPushButton(boxFeedback);
        btn6AxisRXP->setObjectName(QString::fromUtf8("btn6AxisRXP"));
        sizePolicy2.setHeightForWidth(btn6AxisRXP->sizePolicy().hasHeightForWidth());
        btn6AxisRXP->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(btn6AxisRXP, 3, 7, 1, 1);

        btn6AxisJ4M = new QPushButton(boxFeedback);
        btn6AxisJ4M->setObjectName(QString::fromUtf8("btn6AxisJ4M"));
        sizePolicy2.setHeightForWidth(btn6AxisJ4M->sizePolicy().hasHeightForWidth());
        btn6AxisJ4M->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(btn6AxisJ4M, 3, 0, 1, 1);

        btn6AxisRXM = new QPushButton(boxFeedback);
        btn6AxisRXM->setObjectName(QString::fromUtf8("btn6AxisRXM"));
        sizePolicy2.setHeightForWidth(btn6AxisRXM->sizePolicy().hasHeightForWidth());
        btn6AxisRXM->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(btn6AxisRXM, 3, 4, 1, 1);

        btn6AxisXM = new QPushButton(boxFeedback);
        btn6AxisXM->setObjectName(QString::fromUtf8("btn6AxisXM"));
        sizePolicy2.setHeightForWidth(btn6AxisXM->sizePolicy().hasHeightForWidth());
        btn6AxisXM->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(btn6AxisXM, 0, 4, 1, 1);

        lblR_3 = new QLabel(boxFeedback);
        lblR_3->setObjectName(QString::fromUtf8("lblR_3"));
        lblR_3->setFont(font);
        lblR_3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblR_3, 3, 5, 1, 1);

        label_42 = new QLabel(boxFeedback);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setFont(font);
        label_42->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_42, 0, 5, 1, 1);


        verticalLayout_4->addLayout(gridLayout_5);

        labDI = new QLabel(boxFeedback);
        labDI->setObjectName(QString::fromUtf8("labDI"));
        sizePolicy.setHeightForWidth(labDI->sizePolicy().hasHeightForWidth());
        labDI->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(labDI);

        labDO = new QLabel(boxFeedback);
        labDO->setObjectName(QString::fromUtf8("labDO"));
        sizePolicy.setHeightForWidth(labDO->sizePolicy().hasHeightForWidth());
        labDO->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(labDO);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_7->addLayout(verticalLayout_4);

        boxErrorInfo = new QGroupBox(boxFeedback);
        boxErrorInfo->setObjectName(QString::fromUtf8("boxErrorInfo"));
        gridLayout_7 = new QGridLayout(boxErrorInfo);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        textEditErrorInfo = new QTextEdit(boxErrorInfo);
        textEditErrorInfo->setObjectName(QString::fromUtf8("textEditErrorInfo"));

        gridLayout_7->addWidget(textEditErrorInfo, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(boxErrorInfo);


        gridLayout_4->addLayout(horizontalLayout_7, 0, 0, 1, 1);


        horizontalLayout_8->addWidget(boxFeedback);

        boxLog = new QGroupBox(Form);
        boxLog->setObjectName(QString::fromUtf8("boxLog"));
        gridLayout_8 = new QGridLayout(boxLog);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        textEditLog = new QTextEdit(boxLog);
        textEditLog->setObjectName(QString::fromUtf8("textEditLog"));

        gridLayout_8->addWidget(textEditLog, 0, 0, 1, 1);


        horizontalLayout_8->addWidget(boxLog);


        verticalLayout_5->addLayout(horizontalLayout_8);


        verticalLayout_6->addLayout(verticalLayout_5);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Form", "Robot Connnect", nullptr));
        label->setText(QCoreApplication::translate("Form", "IP Address:", nullptr));
        lineEditIP->setText(QCoreApplication::translate("Form", "192.168.1.6", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "Dashboard Port:", nullptr));
        lineEditDashPort->setText(QCoreApplication::translate("Form", "29999", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "Move Port:", nullptr));
        lineEditMovePort->setText(QCoreApplication::translate("Form", "30003", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "Feedback Port:", nullptr));
        lineEditFeedbackPort->setText(QCoreApplication::translate("Form", "30004", nullptr));
        btnConnect->setText(QCoreApplication::translate("Form", "Connect", nullptr));
        boxDashboard->setTitle(QCoreApplication::translate("Form", "Dashboard Function", nullptr));
        btnEnable->setText(QCoreApplication::translate("Form", "Enable", nullptr));
        btnReset->setText(QCoreApplication::translate("Form", "Reset Robot", nullptr));
        clearError->setText(QCoreApplication::translate("Form", "Clear Error", nullptr));
        label_5->setText(QCoreApplication::translate("Form", "Speed Ratio:", nullptr));
        label_6->setText(QCoreApplication::translate("Form", "%", nullptr));
        btnConfirmSpeed->setText(QCoreApplication::translate("Form", "Confirm", nullptr));
        btnEnableAgain->setText(QCoreApplication::translate("Form", "EnableAgain", nullptr));
        label_7->setText(QCoreApplication::translate("Form", "Digital Outputs:", nullptr));
        label_8->setText(QCoreApplication::translate("Form", "Index:", nullptr));
        editIndex->setText(QCoreApplication::translate("Form", "1", nullptr));
        label_9->setText(QCoreApplication::translate("Form", "Status:", nullptr));
        comboBoxStatus->setItemText(0, QCoreApplication::translate("Form", "ON", nullptr));
        comboBoxStatus->setItemText(1, QCoreApplication::translate("Form", "OFF", nullptr));

        btnConfirmDO->setText(QCoreApplication::translate("Form", "Confirm", nullptr));
        boxMoveFunction->setTitle(QCoreApplication::translate("Form", "Move Function", nullptr));
        label_17->setText(QCoreApplication::translate("Form", "X", nullptr));
        label_25->setText(QCoreApplication::translate("Form", "Y", nullptr));
        label_27->setText(QCoreApplication::translate("Form", "Z", nullptr));
        lblR->setText(QCoreApplication::translate("Form", "R", nullptr));
        btnMovJ->setText(QCoreApplication::translate("Form", "MovJ", nullptr));
        btnMovL->setText(QCoreApplication::translate("Form", "MovL", nullptr));
        label_34->setText(QCoreApplication::translate("Form", "J1", nullptr));
        label_26->setText(QCoreApplication::translate("Form", "J2", nullptr));
        label_18->setText(QCoreApplication::translate("Form", "J3", nullptr));
        label_24->setText(QCoreApplication::translate("Form", "J4", nullptr));
        btnJointMovJ->setText(QCoreApplication::translate("Form", "JointMovJ", nullptr));
        boxFeedback->setTitle(QCoreApplication::translate("Form", "Feedback", nullptr));
        labCurrentSpeedRatio->setText(QCoreApplication::translate("Form", "Current Speed Ratio:50%", nullptr));
        labRobotMode->setText(QCoreApplication::translate("Form", "Robot Mode:ROBOT_MODE_ENABLElE", nullptr));
        btn6AxisJ3P->setText(QCoreApplication::translate("Form", "J3+", nullptr));
        label_49->setText(QCoreApplication::translate("Form", "J2", nullptr));
        btn6AxisXP->setText(QCoreApplication::translate("Form", "X+", nullptr));
        label_44->setText(QCoreApplication::translate("Form", "J4", nullptr));
        btn6AxisYM->setText(QCoreApplication::translate("Form", "Y-", nullptr));
        label_39->setText(QCoreApplication::translate("Form", "Z", nullptr));
        label_43->setText(QCoreApplication::translate("Form", "J3", nullptr));
        btn6AxisJ1P->setText(QCoreApplication::translate("Form", "J1+", nullptr));
        btn6AxisJ4P->setText(QCoreApplication::translate("Form", "J4+", nullptr));
        btn6AxisJ1M->setText(QCoreApplication::translate("Form", "J1-", nullptr));
        label_40->setText(QCoreApplication::translate("Form", "Y", nullptr));
        btn6AxisJ3M->setText(QCoreApplication::translate("Form", "J3-", nullptr));
        btn6AxisZP->setText(QCoreApplication::translate("Form", "Z+", nullptr));
        btn6AxisJ2M->setText(QCoreApplication::translate("Form", "J2-", nullptr));
        btn6AxisJ2P->setText(QCoreApplication::translate("Form", "J2+", nullptr));
        label_41->setText(QCoreApplication::translate("Form", "J1", nullptr));
        btn6AxisZM->setText(QCoreApplication::translate("Form", "Z-", nullptr));
        btn6AxisYP->setText(QCoreApplication::translate("Form", "Y+", nullptr));
        btn6AxisRXP->setText(QCoreApplication::translate("Form", "R+", nullptr));
        btn6AxisJ4M->setText(QCoreApplication::translate("Form", "J4-", nullptr));
        btn6AxisRXM->setText(QCoreApplication::translate("Form", "R-", nullptr));
        btn6AxisXM->setText(QCoreApplication::translate("Form", "X-", nullptr));
        lblR_3->setText(QCoreApplication::translate("Form", "R", nullptr));
        label_42->setText(QCoreApplication::translate("Form", "X", nullptr));
        labDI->setText(QCoreApplication::translate("Form", "Digital Inputs:0011 1100 0000 1111 11", nullptr));
        labDO->setText(QCoreApplication::translate("Form", "Digital Outputs:0011 1100 0000 1111 11", nullptr));
        boxErrorInfo->setTitle(QCoreApplication::translate("Form", "Error Info", nullptr));
        boxLog->setTitle(QCoreApplication::translate("Form", "Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
