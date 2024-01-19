#ifdef    __cplusplus
extern "C"
{
#endif /* __cplusplus */

RwBool RwD3D9Supported(void);
void *RwD3D9GetCurrentD3DDevice(void);
RwBool RwD3D9CreateVertexShader(const RwUInt32 *function, void **shader);
RwBool RwD3D9CreatePixelShader(const RwUInt32 *function, void **shader);
void RwD3D9SetVertexShader(void *shader);
void RwD3D9SetPixelShader(void *shader);
void RwD3D9SetFVF(RwUInt32 fvf);
void RwD3D9SetVertexDeclaration(void *vertexDeclaration);
void RwD3D9SetVertexShaderConstant(RwUInt32 registerAddress, const void *constantData, RwUInt32 constantCount);
void RwD3D9SetPixelShaderConstant(RwUInt32 registerAddress, const void *constantData, RwUInt32 constantCount);
void RwD3D9SetVertexPixelShaderConstant(RwUInt32 registerAddress, const void *constantData, RwUInt32 constantCount);

void RwD3D9SetIm2DPixelShader(void *ps);

#ifdef    __cplusplus
}
#endif /* __cplusplus */
