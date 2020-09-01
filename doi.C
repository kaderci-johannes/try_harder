void doi(){
	TH1F *h = new TH1F("test","TEST",10,-.5,9.5);
	for(int i=0;i<10;i++){
		h->Fill(i,3*i+1);
		cout<<"BRANCH!!!! BRANCH!!"<<endl;
	}
	h->Draw();
}
