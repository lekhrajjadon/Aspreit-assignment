#Personal Information
#Name - Lekhraj jadon
#MBM University Jodhpur 
#Passiante leran about Cloud and security
#Focus on learning at this time not money so if you give unpaid i am ready because i want need more and more knowledge 
#Mob-8619713106
#Email-lekhrajjadon12@gamil.com
#linkedin- linkedin.com/in/lekhraj-jadon-40805a227





# Aspreit-assignment
#Create A Cluster


 eksctl create cluster --name my-aspreit-cluster --region ap-south-1 --fargate
  vim Dockerfile
  
Build Docker Image form Dockerfile
 docker build -t dsa-tree-image .

 
 #run the image and get the execute the code
#docker run -p 8080:8080 dsa-tree-image
#Maximum Path Sum: 6 // right answer 

#PS C:\Users\hp\OneDrive\Desktop\Aspreit> vim  deployment.yaml
#PS C:\Users\hp\OneDrive\Desktop\Aspreit>  kubectl apply -f deployment.yaml
 
#PS C:\Users\hp\OneDrive\Desktop\Aspreit> nano deployment.yaml
#PS C:\Users\hp\OneDrive\Desktop\Aspreit>   kubectl apply -f deployment.yaml
#deployment.apps/dsa-tree-deployment created


#PS C:\Users\hp\OneDrive\Desktop\Aspreit> nano service.yaml
#PS C:\Users\hp\OneDrive\Desktop\Aspreit> kubectl apply -f service.yaml
#service/dsa-tree-service created


#PS C:\Users\hp\OneDrive\Desktop\Aspreit> kubectl get deployments
NAME                  READY   UP-TO-DATE   AVAILABLE   AGE
dsa-tree-deployment   0/3     3            0           2m22s
#PS C:\Users\hp\OneDrive\Desktop\Aspreit> kubectl get services
NAME               TYPE           CLUSTER-IP       EXTERNAL-IP                                                                PORT(S)          AGE
dsa-tree-service   LoadBalancer   10.100.201.238   a4a9b702f12d44527ae61ee5700e1e91-1621647833.ap-south-1.elb.amazonaws.com   8080:30977/TCP   64s
kubernetes         ClusterIP      10.100.0.1       <none>                                                                     443/TCP          88m
#PS C:\Users\hp\OneDrive\Desktop\Aspreit> nano ingress.yaml
#PS C:\Users\hp\OneDrive\Desktop\Aspreit> kubectl apply -f ingress.yaml
#ingress.networking.k8s.io/dsa-tree-ingress created
#PS C:\Users\hp\OneDrive\Desktop\Aspreit> kubectl get ingress
#NAME               CLASS    HOSTS                ADDRESS   PORTS   AGE
#dsa-tree-ingress   <none>   lekhrajjadon12.com             80      22s


Update loacal host 
#PS C:\Users\hp\Onedrive\Desktop\Aspreit>  cd C:\Windows\System32\drivers\etc\
#PS C:\Windows\System32\drivers\etc> vim hosts
#PS C:\Windows\System32\drivers\etc> ipconfig /flushdns

#Windows IP Configuration

#Successfully flushed the DNS Resolver Cache.
#PS C:\Windows\System32\drivers\etc> kubectl get ingress
NAME               CLASS    HOSTS                ADDRESS   PORTS   AGE
dsa-tree-ingress   <none>   lekhrajjadon12.com             80      30m
#PS C:\Windows\System32\drivers\etc> kubectl describe ingress dsa-tree-ingress
#Name:             dsa-tree-ingress
Labels:           <none>
Namespace:        default
Address:
Ingress Class:    <none>
Default backend:  <default>
Rules:
  Host                Path  Backends
  ----                ----  --------
  lekhrajjadon12.com
                      /   dsa-tree-service:8080 ()
Annotations:          nginx.ingress.kubernetes.io/rewrite-target: /
Events:               <none>
#PS C:\Windows\System32\drivers\etc> cd C:\Users\hp\Onedrive\Desktop\Aspreit
#PS C:\Users\hp\Onedrive\Desktop\Aspreit> kubectl delete ingress dsa-tree-ingress
#  GNU nano for Windows 64 bits, v7.2-22.1 2023.04.15                       service.yaml
apiVersion: v1
kind: Service
metadata:
  name: dsa-tree-service
spec:
  selector:
    app: dsa-tree-app
  ports:
    - protocol: TCP
      port: 8080
      targetPort: 8080
  type: LoadBalancer

  #GNU nano for Windows 64 bits, v7.2-22.1 2023.04.15 service.yaml
apiVersion: v1
kind: Service

# eksctl utils associate-iam-oidc-provider --cluster my-aspreit-cluster --approve
2024-07-04 09:40:35 [ℹ]  will create IAM Open ID Connect provider for cluster "my-aspreit-cluster" in "ap-south-1"
2024-07-04 09:40:37 [✔]  created IAM Open ID Connect provider for cluster "my-aspreit-cluster" in "ap-south-1"
#PS C:\Users\hp\Onedrive\Desktop\Aspreit\my-app> nano alb-ingress-policy.json
#PS C:\Users\hp\Onedrive\Desktop\Aspreit\my-app> nano trust-policy.json
#PS C:\Users\hp\Onedrive\Desktop\Aspreit\my-app> nano trust-policy.json

#helm repo add eks https://aws.github.io/eks-charts
#"eks" already exists with the same configuration, skipping
#PS C:\Users\hp\Onedrive\Desktop\Aspreit\my-app> helm upgrade -i aws-load-balancer-controller eks/aws-load-balancer-controller --namespace kube-system --set clusterName=my-aspreit-cluster   --set serviceAccount.create=false  --set serviceAccount.name=aws-load-balancer-controller --set region=ap-south-1
Release "aws-load-balancer-controller" has been upgraded. Happy Helming!
#NAME: aws-load-balancer-controller
#LAST DEPLOYED: Thu Jul  4 10:06:13 2024
#NAMESPACE: kube-system
#STATUS: deployed
#REVISION: 2
#TEST SUITE: None
#NOTES:
#AWS Load Balancer controller installed!

By using the load balancer and Ingress controleer i run my app outside the world 


 

