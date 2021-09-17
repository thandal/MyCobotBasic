1.	�ϲ�APIָ�����
1.	setServoEncoder (byte servo_no, int servo_encoder, int servo_sp);

����ָ���ؽڣ���ָ���ٶ�ת����ָ����λֵ��
�ؽ���� = servo_no��ȡֵ��Χ 1-6��
ָ����λֵ = servo_encoder��ȡֵ��Χ0-4096��
ָ���ٶ� = servo_sp��ȡֵ��Χ0-4000,��

2.	setAngle (byte servo_no, int angle, int sp);

����ָ���ؽڣ���ָ���ٶ���ת����Ӧ�Ƕȣ�
�ؽ���� = servo_no��ȡֵ��Χ 1-6��
ָ���Ƕ� = angle��ȡֵ��Χ -170�㡪 + 170�㣻
ָ���ٶ� = sp��ȡֵ��Χ0-4000,��

3.	setServosEncoder (int servo_encoder_1, int servo_encoder_2, int servo_encoder_3, int servo_encoder_4, int servo_encoder_5, int servo_encoder_6, int servo_sp);

ָ�������ؽڶ����ָ���ٶ�ת����ָ����λֵ��
1�Ŷ����λֵ = servo_encoder_1��ȡֵ��Χ 0 �C 4096��
2�Ŷ����λֵ = servo_encoder_2��ȡֵ��Χ 0 �C 4096��
3�Ŷ����λֵ = servo_encoder_3��ȡֵ��Χ 0 �C 4096��
4�Ŷ����λֵ = servo_encoder_4��ȡֵ��Χ 0 �C 4096��
5�Ŷ����λֵ = servo_encoder_5��ȡֵ��Χ 0 �C 4096��
6�Ŷ����λֵ = servo_encoder_6��ȡֵ��Χ 0 �C 4096��
ָ���ٶ� = servo_sp��ȡֵ��Χ 0 - 4000��

4.	calibrateServo (byte servo_no);

�趨��ǰ��λֵΪ����Ƕ���㣺
�ؽڶ����� = servo_no��

5.	setServoData (byte servo_no, byte servo_state, byte servo_data);

�趨�ؽڶ������ز��������޸Ĳ���������PID�����ָʾ�ơ���С��������
ָ���ؽڶ����� = servo_no��ȡֵ��Χ 1 �C 6��
���޸Ĳ�����ַ = servo_state��
���޸Ĳ���ֵ = servo_data�����£�
��ַ	����			ȡֵ��Χ	��ʼֵֵ			ȡֵ����
20	LED��������		0-254		0				��Ӧλ����1Ϊ�������Ʊ�����Ӧλ����0Ϊ�ر����Ʊ���
21	λ�û�P����ϵ��		0-254		123�ؽ�ȡֵ8,456ȡֵ5��		���Ƶ���ı���ϵ��
22	λ�û�D ΢��ϵ��	0-254		123�ؽ�ȡֵ20��456�ؽ�ȡֵ13.	���Ƶ����΢��ϵ��
23	λ�û�I ����ϵ��	0-254		0				���Ƶ���Ļ���ϵ��
24	��С������		0-1000		0				���ö������С�������Ť�أ���1000 = 100% * ��תŤ��


6.	releaseAllServos ();

���ƶ��Ť�����Ϊ0��ʹ��е�۴���ж��״̬��

7.	getAngleEncoder (byte joint_no);

��ȡ�ؽڶ����ǰ�ĵ�λֵ��
�ؽڶ����� = joint_no��

8.	getAngle (byte joint_no);

��ȡ��ǰ����ĽǶ�ֵ��
�ؽڶ����� = joint_no��

9.	 setRGB (byte R, byte G, byte B);

�趨atom��Ļ��RGB�Ƶ���ɫ��
��ɫ���Ӧ����ֵ = R��ȡֵ��Χ 0x00 �C 0xFF��
��ɫ���Ӧ����ֵ = G��ȡֵ��Χ 0x00 �C 0xFF��
��ɫ���Ӧ����ֵ = B��ȡֵ��Χ 0x00 �C 0xFF��

10.	setColor(byte color);
�趨atom��Ļ��RGB�Ƶ���ɫ��
״ֵ̬ȡֵ = color��ȡֵ��Χ���£�
ȡֵ	0	1	2	3	4
��ɫ	��ɫ	��ɫ	��ɫ	��ɫ	��ɫ

11.	setAtomPinMode (byte pin, byte mode);

����atomָ�����ŵ��������״̬��
ָ��������� = pin��
ָ��״ֵ̬ = mode��ȡֵ1λ�����0Ϊ���룻

12.	setAtomDigitalWrite (byte pin, byte data);

����atmoָ�����������״ֵ̬��
ָ��������� = pin��
ָ��״ֵ̬ = data��

13.	checkHeader ();

�����յ�������ͷ�ļ��Ƿ�Ϊָ�����ݣ����������ݣ����������ȡ��

14.	rFlushSerial ();

��ȡ��ǰ���ڽ��������棻
