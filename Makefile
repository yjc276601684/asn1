asn1_a: 
	g++ asn1_a.cpp -o asn1_a
asn1_b:	
	g++ asn1_b.cpp -o asn1_b

asn1_c:
	g++ asn_c.cpp -o asn1_c

clean: 
	rm -rf *o asn1_a asn1_b asn1_c 
