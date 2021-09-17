1.	上层API指令解析
1.	setServoEncoder (byte servo_no, int servo_encoder, int servo_sp);

控制指定关节，以指定速度转动至指定电位值：
关节序号 = servo_no，取值范围 1-6；
指定电位值 = servo_encoder，取值范围0-4096；
指定速度 = servo_sp，取值范围0-4000,；

2.	setAngle (byte servo_no, int angle, int sp);

控制指定关节，以指定速度旋转到对应角度：
关节序号 = servo_no，取值范围 1-6；
指定角度 = angle，取值范围 -170°— + 170°；
指定速度 = sp，取值范围0-4000,；

3.	setServosEncoder (int servo_encoder_1, int servo_encoder_2, int servo_encoder_3, int servo_encoder_4, int servo_encoder_5, int servo_encoder_6, int servo_sp);

指定六个关节舵机以指定速度转动至指定电位值：
1号舵机电位值 = servo_encoder_1，取值范围 0 – 4096；
2号舵机电位值 = servo_encoder_2，取值范围 0 – 4096；
3号舵机电位值 = servo_encoder_3，取值范围 0 – 4096；
4号舵机电位值 = servo_encoder_4，取值范围 0 – 4096；
5号舵机电位值 = servo_encoder_5，取值范围 0 – 4096；
6号舵机电位值 = servo_encoder_6，取值范围 0 – 4096；
指定速度 = servo_sp，取值范围 0 - 4000；

4.	calibrateServo (byte servo_no);

设定当前电位值为舵机角度零点：
关节舵机编号 = servo_no；

5.	setServoData (byte servo_no, byte servo_state, byte servo_data);

设定关节舵机的相关参数，可修改参数包括：PID、舵机指示灯、最小启动力：
指定关节舵机序号 = servo_no，取值范围 1 – 6；
可修改参数地址 = servo_state；
可修改参数值 = servo_data，如下；
地址	功能			取值范围	初始值值			取值解析
20	LED报警条件		0-254		0				对应位设置1为开启闪灯报警对应位设置0为关闭闪灯报警
21	位置环P比例系数		0-254		123关节取值8,456取值5。		控制电机的比例系数
22	位置环D 微分系数	0-254		123关节取值20，456关节取值13.	控制电机的微分系数
23	位置环I 积分系数	0-254		0				控制电机的积分系数
24	最小启动力		0-1000		0				设置舵机的最小输出启动扭矩，设1000 = 100% * 堵转扭力


6.	releaseAllServos ();

控制舵机扭力输出为0，使机械臂处于卸力状态；

7.	getAngleEncoder (byte joint_no);

读取关节舵机当前的电位值：
关节舵机序号 = joint_no；

8.	getAngle (byte joint_no);

获取当前舵机的角度值：
关节舵机序号 = joint_no；

9.	 setRGB (byte R, byte G, byte B);

设定atom屏幕的RGB灯的颜色：
红色光对应参数值 = R，取值范围 0x00 – 0xFF；
绿色光对应参数值 = G，取值范围 0x00 – 0xFF；
蓝色光对应参数值 = B，取值范围 0x00 – 0xFF；

10.	setColor(byte color);
设定atom屏幕的RGB灯的颜色：
状态值取值 = color，取值范围如下：
取值	0	1	2	3	4
颜色	红色	绿色	蓝色	黄色	彩色

11.	setAtomPinMode (byte pin, byte mode);

设置atom指定引脚的输入输出状态：
指定引脚序号 = pin；
指定状态值 = mode，取值1位输出、0为输入；

12.	setAtomDigitalWrite (byte pin, byte data);

设置atmo指定引脚输出的状态值：
指定引脚序号 = pin；
指定状态值 = data；

13.	checkHeader ();

检查接收到的数据头文件是否为指定数据，是则处理数据，否则继续读取；

14.	rFlushSerial ();

读取当前串口接收区缓存；
