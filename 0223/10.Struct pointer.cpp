#include<stdio.h>
#include<stdlib.h>
int main(void){
	
	struct data{
	char name[15];
	int math;
	int eng;	
	}student, *ptr;
	
	ptr=&student; //ptr ���Vstudent 
	printf("Name: ");
	gets(ptr->name);
	printf("Math: ");
	scanf("%d",&ptr->math);
	printf("English: ");
	scanf("%d",&ptr->eng);
	puts("");//��@�Ů� 
	
	printf("Name: %s\n",student.name);
	printf("Math: %d\n",ptr->math);
	printf("English: %d\n",ptr->eng);
	printf("Average= %.2f\n",(ptr->eng+ptr->math)/2.0);
=
	system("pause");
	return 0;
}

/*http://blog.csdn.net/lingchen2348/article/details/52754053
scanf(),getchar(),gets()�ϧO�P�Ϊk
��� 2016�~10��08�� 10:18:28
�o�X�ӱ`������J��Ʈɱ`�x�Z�۪�ǵ{���]�p���H�A²�椶�Ф@�U�ϧO�P�Ϊk�C
�@�Bscanf();���H�̱`�ΡA�򥻮榡�N�Oscanf("%d,%c",&a,&b);��J���ƶq�i�H�~���X�R�A����N��L��J�H���P�榡�O�s�b�ܼƸ̡A�\��j�j�C
�`�N�I�G
1�B���n�ѤF�["&"�A�o�Ө���}�ūܭ��n�A�����ƭn���o�Ӧ�}�h�A���H�g�`��F
2�Bscanf(),�P�_��J�������лx�O�Ů�M�^���A�ҥH��J�r��ɡA�Y�������Ů�A�Ů�᭱���r����J���i�h�A�]��scanf�w�g�����J�F�F
3�B���n�bscanf()���[�J�@�����C���K���榡�r���A��pscanf("a= %d"�A&a)�F"a="�N�O�ۤv���ۤv��·СA��J�ַ̽|���D�A�n�D��J"a="�H
�G�Bgets(),��J�r�ꪺ�n����A��A���r�ꤤ���Ů�ɡA�N�O�Qscanf�F�Agets(abc);�N�i�H�ѨM�o�Ӱ��D�Aabc�O�Ӧr���}�C�A�ΨӦs�r��A��L�W����J�H�^������F
�`�N�I
1�Bgets()�@���u���J�@�Ӧr��A����scanf()���˳s�򵹦n�X���ܼƽ�ȡF
2�B�D�n�Φb�r�ꪺ��J�W�A�䥦�������Ҽ{
�T�Bgetchar(),�o��@�Ӧr���A��A�u�Q���ϥΪ̿�J�@�Ӧr���ɡA�i�H�Ҽ{�Υ��A���u�����@�Ӧr���A��l���n�A��p���Τ�P�_yes or no �ɡA�A�u�Q���Τ��JY �Ϊ�N�ɡC
�`�N�I
1�B�u�����@�Ӧr��
2�B��Ʈ榡�Ȭ��r���A�Ʀ�]�|�Q���r���C

�A�ɥR�@�I�G
���ޥέ��Ө�ƨӶi����L��J�A�@�Ӧn�ߺD�N�O�ήɲM����L�w�İϡA�]���ϥΪ̫ܥi�ण���ӧA�������榡�V��L�A���ǮɭԧY�ϬO�̫᪺���@��"�^��"�]�|�b��L�w�İϯd�U�@�Ӧr���A�v�T���򪺿�J�]����ϥ�scanf����Ʈɫܥi���Ū�J���O�^���^�A���F�����̫�@�Ӧ^�����v�T�A�@�Ǥ�k�O�bscanf�e�h�g�@��getchar()�h�l���o�Ӧ^���A���ǬO�g�bscanf()��A�o�n�ھڤ��P�{���ۦ�]�w�A�������ٷ|�s�b�@�ر��p�A�N�O�L�ש�b�e�٬O��b��Agetchar()�`�|���p�߱N���`����L��J"�Y��"�@�Ӧr��(�쥻�]�p���O�Y���^����)�A�o�@�I�]�ܦn�z�ѡA�]�����O�@�ӿ�J��ơA��L�w�İϪ��r���O�_�h�l�����ݭn�A�ۤv�h�P�_�C
�t�@�Ӥ�k�N�O��fflush(stdin);�o�ӻy�y�N�O�M����L�w�İϸ�ơA�ӤH�Pı�A�p�G�A���{�����ݭn���linux�W�h���ܡA�u�O���@�~�m�m��A�̦n�γo�ӡA��bscanf�e���N�n�A�o��ܷ�A�}�l�@����L��J�ɡA��L�w�İϬO�����b�b���A�ܬ٤ߡC



*/
