//���������ʵ������ֵ�����򽻻���������Ҫ����ָ���ָ����ô�鷳
//           ���Ƶģ�ɾ���Ĳ�һ����һ���ڵ㣬ɾ��һ��ֵ������ֵ��ǰ��Ȼ��ɾ�����һ���ڵ�Ҳ��һ�ַ��������Ǻ�����
//                        /*��Ҳ�������һ�����ƣ�ɾ��ֱ��ɾ��һ���㼴��*/ 
//           ������ֵ�����򼴿ɣ���Ϊ���� ����Ҫ�ҵ��ýڵ��������һ���ڵ㣩



//���Ա������,����ð������,ֱ�ӱ�������   /*   1    */
void Listsort(Node* & head) {
    int i = 0;
    int j = 0;
    //���ڱ�������
    Node * L = head;
    //��Ϊһ����ʱ��
    Node * p;
    Node * p1;
    //�������Ϊ��ֱ�ӷ���
    if (head->value == 0)return;

    for (i = 0; i < head->value - 1; i++) {
        L = head->next;
        for (j = 0; j < head->value - i - 1; j++) {
            //�õ�����ֵ
            p = L;
            p1 = L->next;
            //���ǰ����Ǹ��Ⱥ�����Ǹ��󣬾ͽ�������֮�����������
            if (p->value > p1->value) {
                Elemtype temp = p->value;
                p->value = p1->value;
                p1->value = temp;
            }
            L = L->next;
        }
    }
} 



//�������е�ֵ�Ž����飬����������Ȼ���ٴ��ȥ  /*   2     */


void Listsort_1(Node* & head) {
    int i = 0;
    int j = 0;
    //���ڱ�������
    Node * L = head;
    //�������Ϊ��ֱ�ӷ���
    if (head->value == 0)return;
    Elemtype * copy = new Elemtype[head->value];
    //���������������
    for (i = 0; i < head->value; i++) {
        L = L->next;
        copy[i] = L->value;
    }
    //����STL�е�sort����
    sort(copy, copy + head->value);
    L = head;
    //��Ż�������
    for (i = 0; i < head->value; i++) {
        L = L->next;
          L->value= copy[i];
    }
}



//�����ڵ�����         /*        3          * /

void swap_node(Node * & head,int i,int j) {//ͷ�ڵ㣬����Ҫ���������ڵ��λ�� 
    if (i<1 || j<1 || i>head->value || j >head->value) {
        cout << "����λ���Ƿ�Ϸ�" << endl;
        return;
    }
    if (i == j)
    {
        return;
    }
    if (abs(i - j) == 1) {
        Node * pre;
        if (i < j)//�����������ڵ� ����Ҫ����λ�õı�ǣ� 
            pre = getitem(head, i);
        else
            pre = getitem(head, j);
        Node * a = pre->next;
        Node * b = a->next;
        pre->next = b;
        a->next = b->next;
        b->next = a;
        return;
    }
	//�����������ڵ㣨��Ҫ6��λ�õı�ǣ� 
    Node * a = getitem(head, i);
    Node * b = getitem(head, j);
    Node * p = a->next;
    Node * q = b->next;
    Node * p_next = p->next;
    Node * q_next = q->next;
    a->next = q;
    q->next = p_next;
    b->next = p;
    p->next = q_next;
} 
Node * getitem(Node * & head, int i) {
    int j = 0;
    Node * L = head;
    if (i<1 || i >head->value)return NULL;
    while (j < i - 1) {
        L = L->next;
        ++j;
    }
    return L;
}
       //���Ա�����򣬽������
void Listsort_Node(Node* & head) {
    int i = 0;
    int j = 0;
    //���ڱ�������
    Node * L = head;
    //��Ϊһ����ʱ��
    Node * p;
    Node * p1;
    //�������Ϊ��ֱ�ӷ���
    if (head->value == 0)return;
    int flag = 0;
    cout << head->value << endl;
    for (i = 0; i < head->value - 1; i++) {
        L = head->next;
        for (j = 0; j < head->value - 1 - i; j++) {
            //�����˽�㣬��ô���Ѿ��ڽ�������ʱ�򣬰�L�ƶ�����һ������ˣ���Ϊֻ�����ҽ����������Բ�Ҫ
            //��ִ�У�L = L->next;������ᱨ���
            if (L->value > L->next->value) {
                flag = 1;
                swap_node(head, j + 1, j + 2);

            }
            if (flag == 1) {
                flag = 0;
            }
            else {
                L = L->next;
            }

        }   
    }
}










